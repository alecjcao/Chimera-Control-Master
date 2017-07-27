#include "stdafx.h"
#include "RhodeSchwarz.h"
#include "GPIB.h"
#include "constants.h"
#include "MasterWindow.h"


/*
 * The controls in this class only display information about what get's programmed to the RSG. They do not
 * (by design) provide an interface for which the user to change the programming of the RSG directly. The
 * user is to do this by using the "rsg:" command in a script.
 */
void RhodeSchwarz::initialize( POINT& pos, std::vector<CToolTipCtrl*>& toolTips, MasterWindow* master,
							   int& id )
{
	// These are currently just hard-coded.
	triggerTime = 0.01;
	rsgTtl = "a1";

	// controls
	header.sPos = { pos.x, pos.y, pos.x + 480, pos.y + 25 };
	header.ID = id++;
	header.Create( "RHODE-SHWARTZ GENERATOR INFO (READ-ONLY)", WS_BORDER | WS_CHILD | WS_VISIBLE 
				   | ES_CENTER | ES_READONLY, header.sPos, master, header.ID );
	header.fontType = Heading;
	pos.y += 25;

	infoControl.sPos = { pos.x, pos.y, pos.x + 480, pos.y + 100 };
	infoControl.ID = id++;
	infoControl.Create( WS_VISIBLE | WS_CHILD | LVS_REPORT | LVS_EDITLABELS | WS_BORDER,
						infoControl.sPos, master, infoControl.ID );
	infoControl.fontType = Small;
	infoControl.SetBkColor( RGB( 15, 15, 15 ) );
	infoControl.SetTextBkColor( RGB( 15, 15, 15 ) );
	infoControl.SetTextColor( RGB( 255, 255, 255 ) );
	LV_COLUMN listViewDefaultCollumn;
	// Zero Members
	memset( &listViewDefaultCollumn, 0, sizeof( listViewDefaultCollumn ) );
	// Type of mask
	listViewDefaultCollumn.mask = LVCF_TEXT | LVCF_WIDTH | LVCF_SUBITEM;
	listViewDefaultCollumn.pszText = "#";
	listViewDefaultCollumn.cx = 80;
	infoControl.InsertColumn( 0, &listViewDefaultCollumn );
	listViewDefaultCollumn.pszText = "Frequency (GHz)";
	listViewDefaultCollumn.cx = 200;
	infoControl.InsertColumn( 1, &listViewDefaultCollumn );
	listViewDefaultCollumn.pszText = "Power (dBm)";
	listViewDefaultCollumn.cx = 200;
	infoControl.InsertColumn( 2, &listViewDefaultCollumn );
	pos.y += 100;
}

void RhodeSchwarz::rearrange(UINT width, UINT height, fontMap fonts)
{
	header.rearrange("", "", width, height, fonts);
	infoControl.rearrange("", "", width, height, fonts);
}

/*
 * The following function takes the existing list of events (already evaluated for a particular variation) and
 * orders them in time. 
 */
void RhodeSchwarz::orderEvents(UINT var)
{
	std::vector<rsgEventInfoFinal> newOrder;
	for (auto event : events[var])
	{
		bool set = false;
		int count = 0;
		// deal with the first case.
		if (newOrder.size() == 0)
		{
			newOrder.push_back( event );
			continue;
		}

		for (int eventInc = 0; eventInc < newOrder.size(); eventInc++)
		{
			if (newOrder[eventInc].time > event.time)
			{
				newOrder.insert( newOrder.begin() + count, event );
				set = true;
				break;
			}
		}

		if (!set)
		{
			newOrder.push_back( event );
		}
	}
	events[var] = newOrder;
}


void RhodeSchwarz::setInfoDisp(UINT var)
{
	infoControl.DeleteAllItems();
	int count = 0;
	for (auto event : events[var])
	{
		LVITEM listViewDefaultItem;
		memset( &listViewDefaultItem, 0, sizeof( listViewDefaultItem ) );
		listViewDefaultItem.mask = LVIF_TEXT;   // Text Style
		listViewDefaultItem.cchTextMax = 256; // Max size of test
		std::string text = std::to_string( count + 1 );
		listViewDefaultItem.pszText = (LPSTR)text.c_str();
		listViewDefaultItem.iItem = count;          // choose item  
		listViewDefaultItem.iSubItem = 0;       // Put in first coluom
		infoControl.InsertItem( &listViewDefaultItem );
		listViewDefaultItem.iSubItem = 1;
		text = std::to_string( event.frequency );
		listViewDefaultItem.pszText = (LPSTR)text.c_str();
		infoControl.SetItem( &listViewDefaultItem );
		listViewDefaultItem.iSubItem = 2;
		text = std::to_string( event.power );
		listViewDefaultItem.pszText = (LPSTR)text.c_str();
		infoControl.SetItem( &listViewDefaultItem );
		count++;
	}
}

void RhodeSchwarz::interpretKey(key variationKey, std::vector<variable>& vars)
{
	UINT variations;
	if (vars.size() == 0)
	{
		variations = 1;
	}
	else
	{
		variations = variationKey[vars[0].name].first.size();
	}
	/// imporantly, this sizes the relevant structures.
	events.clear();
	events.resize(variations);
	for (UINT var = 0; var < variations; var++)
	{
		for (int freqInc = 0; freqInc < eventStructures.size(); freqInc++)
		{
			rsgEventInfoFinal event;
			// convert freq
			event.frequency = reduce(eventStructures[freqInc].frequency, variationKey, var, vars);
			// convert power
			event.power = reduce(eventStructures[freqInc].power, variationKey, var, vars);
			/// deal with time!
			if (eventStructures[freqInc].time.first.size() == 0)
			{
				event.time = eventStructures[freqInc].time.second;
			}
			else
			{
				for (auto timeStr : eventStructures[freqInc].time.first)
				{
					event.time += reduce(timeStr, variationKey, var, vars);
				}
				event.time += eventStructures[freqInc].time.second;
			}
			events[var].push_back(event);
		}	
	}
}


// Essentially gets called by a script command.
void RhodeSchwarz::addFrequency(rsgEventStructuralInfo info)
{
	eventStructures.push_back( info );
}


void RhodeSchwarz::programRSG( Gpib* gpib, UINT var )
{
	if (events[var].size() == 0)
	{
		// nothing to do.
		return;
	}
	else if (events[var].size() == 1)
	{
		gpib->gpibSend( RSG_ADDRESS, "OUTPUT ON" );
		gpib->gpibSend( RSG_ADDRESS, "SOURce:FREQuency:MODE CW" );
		gpib->gpibSend( RSG_ADDRESS, "FREQ " + std::to_string( events[var][0].frequency ) + " GHz" );
		gpib->gpibSend( RSG_ADDRESS, "POW " + std::to_string( events[var][0].power ) + " dBm" );
		gpib->gpibSend( RSG_ADDRESS, "OUTP ON" );
	}
	else
	{
		gpib->gpibSend( RSG_ADDRESS, "OUTP ON" );
		gpib->gpibSend( RSG_ADDRESS, "SOURce:LIST:SEL 'freqList" + std::to_string( events.size() ) + "'" );
		std::string frequencyList = "SOURce:LIST:FREQ " + std::to_string( events[var][0].frequency );
		std::string powerList = "SOURce:LIST:POW " + std::to_string( events[var][0].power ) + "dBm";
		for (int eventInc = 1; eventInc < events[var].size(); eventInc++)
		{
			frequencyList += ", ";
			frequencyList += std::to_string( events[var][eventInc].frequency ) + " GHz";
			powerList += ", ";
			powerList += std::to_string( events[var][eventInc].power ) + "dBm";
		}
		gpib->gpibSend( RSG_ADDRESS, frequencyList.c_str() );
		gpib->gpibSend( RSG_ADDRESS, powerList.c_str() );
		gpib->gpibSend( RSG_ADDRESS, "SOURce:LIST:MODE STEP" );
		gpib->gpibSend( RSG_ADDRESS, "SOURce:LIST:TRIG:SOURce EXT" );
		gpib->gpibSend( RSG_ADDRESS, "SOURce:FREQ:MODE LIST" );
	}
}

void RhodeSchwarz::clearFrequencies()
{
	eventStructures.clear();
	events.clear();
}

std::vector<rsgEventStructuralInfo> RhodeSchwarz::getFrequencyForms()
{
	return eventStructures;
}

std::string RhodeSchwarz::getRsgTtl()
{
	return rsgTtl;
}

double RhodeSchwarz::getTriggerTime()
{
	return triggerTime;
}

