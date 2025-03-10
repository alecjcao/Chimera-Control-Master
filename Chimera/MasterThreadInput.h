﻿#pragma once

#include "DioSystem.h"
#include "DacSystem.h"
#include "VariableSystem.h"
//#include "RhodeSchwarz.h"
#include "GpibFlume.h"
#include "DebugOptionsControl.h"
//#include "Agilent.h"
#include "EmbeddedPythonHandler.h"
#include <chrono>
#include <vector>
#include <atomic>
#include <condition_variable>
#include "atomCruncher.h"
//for moog test:
#include "SerialSynth.h"
#include "DDS_SYNTH.h"
#include "GigaMoog.h"
#include "fpgaAWG.h"

#include "rerngParams.h"

class DataLogger;
class MasterManager;

//Useful structure for containing relevant parameters for master thread.
struct MasterThreadInput
{
	//for moog test:
	//SerialSynth* moog;
	//std::string moogScriptAddress;
	fpgaAWG* awg;
	std::string awgScriptAddress;
	gigaMoog* gmoog;
	std::string gmoogScriptAddress;
	DDS_SYNTH* dds;
	std::string ddsScriptAddress;

	EmbeddedPythonHandler* python;
	DataLogger* logger;
	profileSettings profile;
	DioSystem* ttls;
	DacSystem* dacs;
	UINT repetitionNumber;
	std::vector<variableType> variables;
	std::vector<variableType> constants;
	MasterManager* thisObj;
	std::string masterScriptAddress;
	Communicator* comm;
	//RhodeSchwarz* rsg;
	debugInfo debugOptions;
	//std::vector<Agilent*> agilents;
	//TektronicsControl* topBottomTek;
	//TektronicsControl* eoAxialTek;
	VariableSystem* globalControl;
	//NiawgController* niawg;
	UINT intensityAgilentNumber;
	bool quiet;
	mainOptions settings;
	bool runSingle;
	bool runNiawg;
	bool runMaster;
	bool runAWG;
	// only for rearrangement.
	std::mutex* rearrangerLock;
	std::vector<std::vector<bool>>* atomQueueForRearrangement;
	chronoTimes* andorsImageTimes;
	chronoTimes* grabTimes;
	std::condition_variable* conditionVariableForRearrangement;
	rerngOptions rearrangeInfo;
	std::atomic<bool>* skipNext;
};


struct ExperimentInput
{
	ExperimentInput::ExperimentInput( ) :
		includesCameraRun( false ), masterInput( NULL ), plotterInput( NULL ), cruncherInput( NULL ) { }
	MasterThreadInput* masterInput;
	realTimePlotterInput* plotterInput;
	atomCruncher* cruncherInput;
	AndorRunSettings camSettings;
	bool includesCameraRun;
};