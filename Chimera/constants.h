#pragma once

#include "stdafx.h"
//#include "agilentStructures.h"
#include "miscellaneousCommonFunctions.h"
//#include "niFgen.h"
#include <string>
#include "miscellaneousCommonFunctions.h"

// running in safemode means that the program doesn't actually try to connect to various devices. It can be used to
// build and debug other aspects of the program.

//#define MASTER_COMPUTER
//#define SPECTRE_LAPTOP
#define GLADOS
// #define DESKTOP_COMPUTER
//#define SALAMIS_TABLET
//#define PAL9000
/// File Locations

#ifdef GLADOS
	#define PYTHON_HOME L"C:\\ProgramData\\Anaconda3\\"
	#define MOOG_SAFEMODE false
	#define AWG_SAFEMODE false
	#define GIGAMOOG_SAFEMODE false
	#define NIAWG_SAFEMODE true
	#define ANDOR_SAFEMODE false
	#define PYTHON_SAFEMODE true
	#define DIO_SAFEMODE true
	#define DIO_FPGA_SAFEMODE false
	#define DIO_ARM_MODE true
	#define DDS_SAFEMODE false
	#define DAQMX_SAFEMODE false
	#define RSG_SAFEMODE true
	#define DDS_FPGA_ADDRESS "FT1I6IBSB" //Device Serial: FT1I6IBS, Use FT1I6IBSB in C++ to select Channel B
	#define GIGAMOOG_PORT "COM6"
	#define AWG_PORT "COM13"
	#define AWG_BAUD 115200 /*921600*/ 
	#define TOP_BOTTOM_TEK_SAFEMODE true
	#define TOP_BOTTOM_TEK_USB_ADDRESS "USB0::0x0699::0x0343::C021681::0::INSTR"
	#define EO_AXIAL_TEK_SAFEMODE true
	#define EO_AXIAL_TEK_USB_ADDRESS "USB0::0x0699::0x034C::C010386::0::INSTR"
	#define TOP_BOTTOM_AGILENT_SAFEMODE true
	#define TOP_BOTTOM_AGILENT_USB_ADDRESS "USB0::0x0957::0x2307::MY50002574::0::INSTR"
	#define UWAVE_AXIAL_AGILENT_SAFEMODE true
	#define UWAVE_AXIAL_AGILENT_USB_ADDRESS "USB0::0x0957::0x2C07::MY52810615::0::INSTR"
	#define INTENSITY_SAFEMODE true
	#define INTENSITY_AGILENT_USB_ADDRESS "USB0::0x0957::0x2307::MY50004500::0::INSTR"
	#define FLASHING_SAFEMODE true
	#define FLASHING_AGILENT_USB_ADDRESS "USB0::0x0957::0x2307::MY50003003::0::INSTR"
	#define TESTING_AGILENT_USB_ADDRESS "USB0::0x0957::0x2C07::MY52801397::0::INSTR"
	#define AXIAL_AGILENT_SAFEMODE true
	#define AXIAL_AGILENT_USB_ADDRESS ""
	#define UWAVE_SAFEMODE true
	#define UWAVE_AGILENT_USB_ADDRESS ""

	const std::string PROJECT_LOCATION = "C:\\Users\\KLab\\Desktop\\Chimera-Control-Master\\";
	const std::string DATABASE_LOCATION = "A:\\";
	const std::string PYTHON_CODE_LOCATION = "C:/Users/KLab/Desktop/Chimera-Control-Master/";
	// same as debug output location but with forward slashes for ease of use in python
	const std::string PYTHON_INPUT_LOCATION = "C:/Users/KLab/Desktop/Chimera-Control-Master/Debug-Output";
	const std::string MASKS_FILE_LOCATION = PROJECT_LOCATION + "\\Image Processing\\" + "masks.npy";
	const std::string MASKS_CROP_FILE_LOCATION = PROJECT_LOCATION + "\\Image Processing\\" + "maskPtsCrop.npy";
	const std::string BG_IMAGE_FILE_LOCATION = PROJECT_LOCATION + "\\Image Processing\\" + "bgImg.npy";
	const std::string TWEEZER_AMPLITUDE_LUT_FILE_LOCATION = PROJECT_LOCATION + "\\Tweezer LUT\\" + "ampLUT.npy";
	const std::string TWEEZER_FREQUENCY_LUT_FILE_LOCATION = PROJECT_LOCATION + "\\Tweezer LUT\\" + "freqLUT.npy";
	const std::string PLOT_FILES_SAVE_LOCATION = PROJECT_LOCATION + "\\Plotting\\";
	const std::string LIB_PATH = PROJECT_LOCATION + "Waveforms-Library\\dummyLib\\";
	const std::string DEFAULT_SCRIPT_FOLDER_PATH = PROJECT_LOCATION + "Default Scripts\\";
	const std::string PROFILES_PATH = PROJECT_LOCATION + "Profiles\\";
	const std::string DATA_SAVE_LOCATION = DATABASE_LOCATION;
	const std::string MUSIC_LOCATION = PROJECT_LOCATION + "Camerawg\\Final Fantasy VII - Victory Fanfare [HQ].mp3";
	const std::string FUNCTIONS_FOLDER_LOCATION = PROJECT_LOCATION + "Functions\\";
	const std::string MASTER_CONFIGURATION_FILE_ADDRESS = PROJECT_LOCATION + "Master-Configuration.txt";
	const std::string MOT_ROUTINE_ADDRESS = PROJECT_LOCATION + "Master Profiles\\Hotkey Experiments\\MOT\\turnOnMot.mScript";
	const std::string DEBUG_OUTPUT_LOCATION = PROJECT_LOCATION + "Debug-Output\\";
	const std::string TIMING_OUTPUT_LOCATION = PROJECT_LOCATION + "Data\\";
	const std::string NIAWG_WAVEFORM_OUTPUT_LOCATION = TIMING_OUTPUT_LOCATION;

	//Test file for moog
	const std::string MOOG_TEST_ADDRESS = PROJECT_LOCATION + "Default Scripts\\DEFAULT_MOOG_SCRIPT.moogScript";
	const std::string AWG_TEST_ADDRESS = PROJECT_LOCATION + "Default Scripts\\DEFAULT_AWG_SCRIPT.awgScript";
	const std::string GMOOG_TEST_ADDRESS = PROJECT_LOCATION + "Default Scripts\\DEFAULT_GMOOG_SCRIPT.moogScript";
	const std::string DDS_TEST_ADDRESS = PROJECT_LOCATION + "Default Scripts\\DEFAULT_DDS_SCRIPT.ddsScript";
#endif

#ifdef PAL9000
	#define PYTHON_HOME L"C:\\ProgramData\\Anaconda3\\"
	#define MOOG_SAFEMODE true
	#define AWG_SAFEMODE true
	#define GIGAMOOG_SAFEMODE false
	#define NIAWG_SAFEMODE true
	#define ANDOR_SAFEMODE true
	#define PYTHON_SAFEMODE true
	#define DIO_SAFEMODE true
	#define DIO_FPGA_SAFEMODE true
	#define DIO_ARM_MODE true
	#define DDS_SAFEMODE true
	#define DAQMX_SAFEMODE true
	#define RSG_SAFEMODE true
	#define DDS_FPGA_ADDRESS "FT1I6IBSB" //Device Serial: FT1I6IBS, Use FT1I6IBSB in C++ to select Channel B
	#define GIGAMOOG_PORT "COM7"
	#define TOP_BOTTOM_TEK_SAFEMODE true
	#define TOP_BOTTOM_TEK_USB_ADDRESS "USB0::0x0699::0x0343::C021681::0::INSTR"
	#define EO_AXIAL_TEK_SAFEMODE true
	#define EO_AXIAL_TEK_USB_ADDRESS "USB0::0x0699::0x034C::C010386::0::INSTR"
	#define TOP_BOTTOM_AGILENT_SAFEMODE true
	#define TOP_BOTTOM_AGILENT_USB_ADDRESS "USB0::0x0957::0x2307::MY50002574::0::INSTR"
	#define UWAVE_AXIAL_AGILENT_SAFEMODE true
	#define UWAVE_AXIAL_AGILENT_USB_ADDRESS "USB0::0x0957::0x2C07::MY52810615::0::INSTR"
	#define INTENSITY_SAFEMODE true
	#define INTENSITY_AGILENT_USB_ADDRESS "USB0::0x0957::0x2307::MY50004500::0::INSTR"
	#define FLASHING_SAFEMODE true
	#define FLASHING_AGILENT_USB_ADDRESS "USB0::0x0957::0x2307::MY50003003::0::INSTR"
	#define TESTING_AGILENT_USB_ADDRESS "USB0::0x0957::0x2C07::MY52801397::0::INSTR"
	#define AXIAL_AGILENT_SAFEMODE true
	#define AXIAL_AGILENT_USB_ADDRESS ""
	#define UWAVE_SAFEMODE true
	#define UWAVE_AGILENT_USB_ADDRESS ""

	const std::string PROJECT_LOCATION = "C:\\Users\\KLab\\Documents\\Chimera-Control-Master\\";
	const std::string DATABASE_LOCATION = "A:\\";
	const std::string PYTHON_CODE_LOCATION = "C:/Users/KLab/Documents/Chimera-Control-Master/";
	// same as debug output location but with forward slashes for ease of use in python
	const std::string PYTHON_INPUT_LOCATION = "C:/Users/KLab/Documents/Chimera-Control-Master/Debug-Output";
	const std::string PLOT_FILES_SAVE_LOCATION = PROJECT_LOCATION + "Plotting";
	const std::string LIB_PATH = PROJECT_LOCATION + "Waveforms-Library\\dummyLib\\";
	const std::string DEFAULT_SCRIPT_FOLDER_PATH = PROJECT_LOCATION + "Default Scripts\\";
	const std::string PROFILES_PATH = PROJECT_LOCATION + "Profiles\\";
	const std::string DATA_SAVE_LOCATION = DATABASE_LOCATION;
	const std::string MUSIC_LOCATION = PROJECT_LOCATION + "Camerawg\\Final Fantasy VII - Victory Fanfare [HQ].mp3";
	const std::string FUNCTIONS_FOLDER_LOCATION = PROJECT_LOCATION + "Functions\\";
	const std::string MASTER_CONFIGURATION_FILE_ADDRESS = PROJECT_LOCATION + "Master-Configuration.txt";
	const std::string MOT_ROUTINE_ADDRESS = PROJECT_LOCATION + "Master Profiles\\Hotkey Experiments\\MOT\\turnOnMot.mScript";
	const std::string DEBUG_OUTPUT_LOCATION = PROJECT_LOCATION + "Debug-Output\\";
	const std::string TIMING_OUTPUT_LOCATION = PROJECT_LOCATION + "Data\\";
	const std::string NIAWG_WAVEFORM_OUTPUT_LOCATION = TIMING_OUTPUT_LOCATION;

	//Test file for moog
	const std::string MOOG_TEST_ADDRESS = PROJECT_LOCATION + "Default Scripts\\DEFAULT_MOOG_SCRIPT.moogScript";
	const std::string GMOOG_TEST_ADDRESS = PROJECT_LOCATION + "Default Scripts\\DEFAULT_GMOOG_SCRIPT.moogScript";
	const std::string DDS_TEST_ADDRESS = PROJECT_LOCATION + "Default Scripts\\DEFAULT_DDS_SCRIPT.ddsScript";
#endif

#ifdef SALAMIS_TABLET
	#define PYTHON_HOME L"C:\\ProgramData\\Anaconda3\\"
	#define MOOG_SAFEMODE true
	#define AWG_SAFEMODE true
	#define NIAWG_SAFEMODE true
	#define ANDOR_SAFEMODE true
	#define PYTHON_SAFEMODE true
	#define DIO_SAFEMODE true
	#define DIO_FPGA_SAFEMODE true
	#define DIO_ARM_MODE true
	#define DDS_SAFEMODE true
	#define DAQMX_SAFEMODE true
	#define RSG_SAFEMODE true
	#define DDS_FPGA_ADDRESS "FT1I6IBSB" //Device Serial: FT1I6IBS Use FT1I6IBSB in C++ to select Channel B.
	#define TOP_BOTTOM_TEK_SAFEMODE true
	#define TOP_BOTTOM_TEK_USB_ADDRESS "USB0::0x0699::0x0343::C021681::0::INSTR"
	#define EO_AXIAL_TEK_SAFEMODE true
	#define EO_AXIAL_TEK_USB_ADDRESS "USB0::0x0699::0x034C::C010386::0::INSTR"
	#define TOP_BOTTOM_AGILENT_SAFEMODE true
	#define TOP_BOTTOM_AGILENT_USB_ADDRESS "USB0::0x0957::0x2307::MY50002574::0::INSTR"
	#define UWAVE_AXIAL_AGILENT_SAFEMODE true
	#define UWAVE_AXIAL_AGILENT_USB_ADDRESS "USB0::0x0957::0x2C07::MY52810615::0::INSTR"
	#define INTENSITY_SAFEMODE true
	#define INTENSITY_AGILENT_USB_ADDRESS "USB0::0x0957::0x2307::MY50004500::0::INSTR"
	#define FLASHING_SAFEMODE true
	#define FLASHING_AGILENT_USB_ADDRESS "USB0::0x0957::0x2307::MY50003003::0::INSTR"
	#define TESTING_AGILENT_USB_ADDRESS "USB0::0x0957::0x2C07::MY52801397::0::INSTR"
	#define AXIAL_AGILENT_SAFEMODE true
	#define AXIAL_AGILENT_USB_ADDRESS ""
	#define UWAVE_SAFEMODE true
	#define UWAVE_AGILENT_USB_ADDRESS ""

	const std::string PROJECT_LOCATION = "C:\\Users\\ayoung\\Documents\\Chimera_Control_AY\\Chimera-Control-Master\\";
	const std::string PYTHON_CODE_LOCATION = "C:/Users/ayoung/Documents/Chimera_Control_AY/Chimera-Control-Master/";
	// same as debug output location but with forward slashes for ease of use in python
	const std::string PYTHON_INPUT_LOCATION = "C:/Users/ayoung/Documents/Chimera_Control_AY/Chimera-Control-Master/Debug-Output";
	const std::string PLOT_FILES_SAVE_LOCATION = PROJECT_LOCATION + "Plotting";
	const std::string LIB_PATH = PROJECT_LOCATION + "Waveforms-Library\\dummyLib\\";
	const std::string DEFAULT_SCRIPT_FOLDER_PATH = PROJECT_LOCATION + "Default Scripts\\";
	const std::string PROFILES_PATH = PROJECT_LOCATION + "Profiles\\";
	const std::string DATA_SAVE_LOCATION = PROJECT_LOCATION + "Data\\";
	const std::string MUSIC_LOCATION = PROJECT_LOCATION + "Camerawg\\Final Fantasy VII - Victory Fanfare [HQ].mp3";
	const std::string FUNCTIONS_FOLDER_LOCATION = PROJECT_LOCATION + "Functions\\";
	const std::string MASTER_CONFIGURATION_FILE_ADDRESS = PROJECT_LOCATION + "Master-Configuration.txt";
	const std::string MOT_ROUTINE_ADDRESS = PROJECT_LOCATION + "Master Profiles\\Hotkey Experiments\\MOT\\turnOnMot.mScript";
	const std::string DEBUG_OUTPUT_LOCATION = PROJECT_LOCATION + "Debug-Output\\";
	const std::string TIMING_OUTPUT_LOCATION = PROJECT_LOCATION + "Data\\";
	const std::string NIAWG_WAVEFORM_OUTPUT_LOCATION = TIMING_OUTPUT_LOCATION;

	//Test file for moog
	const std::string MOOG_TEST_ADDRESS = PROJECT_LOCATION + "Default Scripts\\DEFAULT_MOOG_SCRIPT.moogScript";
	const std::string DDS_TEST_ADDRESS = PROJECT_LOCATION + "Default Scripts\\DEFAULT_DDS_SCRIPT.ddsScript";
#endif

#ifdef SPECTRE_LAPTOP
	#define PYTHON_HOME L"C:\\ProgramData\\Anaconda3\\"
	#define NIAWG_SAFEMODE true
	#define ANDOR_SAFEMODE true
	#define PYTHON_SAFEMODE true
	#define DIO_SAFEMODE true
	#define DAQMX_SAFEMODE true
	#define RSG_SAFEMODE true
	#define TOP_BOTTOM_TEK_SAFEMODE true
	#define TOP_BOTTOM_TEK_USB_ADDRESS "USB0::0x0699::0x0343::C021681::0::INSTR"
	#define EO_AXIAL_TEK_SAFEMODE true
	#define EO_AXIAL_TEK_USB_ADDRESS "USB0::0x0699::0x034C::C010386::0::INSTR"
	#define TOP_BOTTOM_AGILENT_SAFEMODE true
	#define TOP_BOTTOM_AGILENT_USB_ADDRESS "USB0::0x0957::0x2307::MY50002574::0::INSTR"
	#define AXIAL_AGILENT_SAFEMODE true
	#define AXIAL_AGILENT_USB_ADDRESS "USB0::0x0957::0x2C07::MY52810615::0::INSTR"
	#define INTENSITY_SAFEMODE true
	#define INTENSITY_AGILENT_USB_ADDRESS "USB0::0x0957::0x2307::MY50004500::0::INSTR"
	#define FLASHING_SAFEMODE true
	#define FLASHING_AGILENT_USB_ADDRESS "USB0::0x0957::0x2307::MY50003003::0::INSTR"
	#define TESTING_AGILENT_USB_ADDRESS "USB0::0x0957::0x2C07::MY52801397::0::INSTR"
	#define UWAVE_SAFEMODE true
	#define UWAVE_AGILENT_USB_ADDRESS "USB0::0x0957::0x2C07::MY52801397::0::INSTR"

	const std::string PROJECT_LOCATION = "C:\\Users\\Mark-Brown\\Chimera-Control\\";
	const std::string PYTHON_CODE_LOCATION = "C:/Users/Mark-Brown/Chimera-Control/Chimera";
	// same as debug output location but with forward slashes for ease of use in python
	const std::string PYTHON_INPUT_LOCATION = "C:/Users/Mark-Brown/Chimera-Control/Debug-Output/";
	const std::string PLOT_FILES_SAVE_LOCATION = PROJECT_LOCATION + "Plotting";
	const std::string LIB_PATH = PROJECT_LOCATION + "Waveforms-Library\\dummyLib\\";
	const std::string DEFAULT_SCRIPT_FOLDER_PATH = PROJECT_LOCATION + "Default Scripts\\";
	const std::string PROFILES_PATH = PROJECT_LOCATION + "Profiles\\";
	const std::string DATA_SAVE_LOCATION = PROJECT_LOCATION + "Data\\";
	const std::string MUSIC_LOCATION = PROJECT_LOCATION + "Camerawg\\Final Fantasy VII - Victory Fanfare [HQ].mp3";
	const std::string FUNCTIONS_FOLDER_LOCATION = PROJECT_LOCATION + "Functions\\";
	const std::string MASTER_CONFIGURATION_FILE_ADDRESS = PROJECT_LOCATION + "Master-Configuration.txt";
	const std::string MOT_ROUTINE_ADDRESS = PROJECT_LOCATION + "Master Profiles\\Hotkey Experiments\\MOT\\turnOnMot.mScript";
	const std::string DEBUG_OUTPUT_LOCATION = PROJECT_LOCATION + "Debug-Output\\";
	const std::string TIMING_OUTPUT_LOCATION = PROJECT_LOCATION + "\\Data\\";
	const std::string NIAWG_WAVEFORM_OUTPUT_LOCATION = TIMING_OUTPUT_LOCATION;
#endif

#ifdef MASTER_COMPUTER
	#define NIAWG_SAFEMODE false
	#define ANDOR_SAFEMODE false
	#define PYTHON_SAFEMODE false
	#define DIO_SAFEMODE false
	#define DAQMX_SAFEMODE false
	#define RSG_SAFEMODE false
	#define TOP_BOTTOM_TEK_SAFEMODE false
	#define TOP_BOTTOM_TEK_USB_ADDRESS "USB0::0x0699::0x0343::C021681::0::INSTR"
	#define EO_AXIAL_TEK_SAFEMODE false
	#define EO_AXIAL_TEK_USB_ADDRESS "USB0::0x0699::0x034C::C010386::0::INSTR"
	#define TOP_BOTTOM_AGILENT_SAFEMODE false
	#define TOP_BOTTOM_AGILENT_USB_ADDRESS "USB0::0x0957::0x2307::MY50002574::0::INSTR"
	#define AXIAL_AGILENT_SAFEMODE false
	#define AXIAL_AGILENT_USB_ADDRESS "USB0::0x0957::0x2C07::MY52810615::0::INSTR"
	#define INTENSITY_SAFEMODE false
	#define INTENSITY_AGILENT_USB_ADDRESS "USB0::0x0957::0x2307::MY50004500::0::INSTR"
	#define FLASHING_SAFEMODE false
	#define FLASHING_AGILENT_USB_ADDRESS "USB0::0x0957::0x2307::MY50003003::0::INSTR"
	#define UWAVE_SAFEMODE false
	#define UWAVE_AGILENT_USB_ADDRESS "USB0::0x0957::0x2C07::MY52801397::0::INSTR"


	#define PYTHON_HOME L"C:\\Program Files (x86)\\Anaconda3\\"

	#define CODE_ROOT "C:\\Users\\Regal-Lab\\Documents\\Chimera-Control"
	const std::string PLOT_FILES_SAVE_LOCATION = str(CODE_ROOT) + "\\Plotting";
	const std::string PYTHON_CODE_LOCATION = "C:/Users/Regal-Lab/Documents/Chimera-Control/Chimera";
	const std::string PYTHON_INPUT_LOCATION = "C:/Users/Regal-Lab/Documents/Chimera-Control/Debug-Output/";
	const std::string LIB_PATH = str(CODE_ROOT) + "\\Waveforms-Library\\WaveLibrary-320-MSpS-0.1-PowerLevel\\";
	const std::string DEFAULT_SCRIPT_FOLDER_PATH = str(CODE_ROOT) + "\\Default Scripts\\";
	const std::string CODE_LOGGING_FILES_PATH = "D:\\Code Versions\\";
	const std::string ACTUAL_CODE_FOLDER_PATH = str(CODE_ROOT) + "\\Chimera\\";
	const std::string PROFILES_PATH = str(CODE_ROOT) + "\\Profiles\\";
	const std::string DATA_SAVE_LOCATION = "J:\\Data Repository\\New Data Repository\\";
	const std::string KEY_ORIGINAL_SAVE_LOCATION = "C:\\Shared\\";
	const std::string MUSIC_LOCATION = str(CODE_ROOT) + "\\Final Fantasy VII - Victory Fanfare [HQ].mp3";
	const std::string FUNCTIONS_FOLDER_LOCATION = str(CODE_ROOT) + "\\Functions\\";
	const std::string MASTER_CONFIGURATION_FILE_ADDRESS(str(CODE_ROOT) + "\\Master-Configuration.txt");
	const std::string LOGGING_FILE_ADDRESS = str(CODE_ROOT) + "\\Master-Log.txt";
	const std::string KEY_ADDRESS = "\\\\Callisto\\Shared\\key.txt";
	const std::string MOT_ROUTINE_ADDRESS = PROFILES_PATH + "Hotkey Experiments\\MOT\\turnOnMot.mScript";
	const std::string DEBUG_OUTPUT_LOCATION = str(CODE_ROOT) + "\\Debug-Output\\";
	const std::string TIMING_OUTPUT_LOCATION = DATA_SAVE_LOCATION + "\\2017\\September\\September 8\\Raw Data\\";
	// location where wave data can be outputted for analyzing with another computer.
	const std::string NIAWG_WAVEFORM_OUTPUT_LOCATION = DATA_SAVE_LOCATION + "2017\\September\\September 7\\Raw Data\\";
#endif

//Moog constants
#define MOOG_COM_PORT "COM3"
#define MOOG_BAUD 77700

// We calibrated this. // NIAWG_GAIN = 1.34.
#define NIAWG_GAIN 1.34
// NIAWG_GAIN = 1.34.

#define MAX_NIAWG_SIGNALS 32

// This is the minimum time (in seconds) that a correction waveform will be allowed to have. Without this, the algorithm might decide that the 1/2 of a period 
// of a waveform might be enough, even though this would probably be far below the amount of time an individual waveform is allowed to have according to the 
// NIAWG (the NIAWG has a minimum waveform size).
// Initial Value: 0.00000025 (250 ns)
#define MIN_CORRECTION_WAVEFORM_TIME 0.00000025
// this is a time in seconds.
#define MAX_CORRECTION_WAVEFORM_TIME 0.001
// this is a phase in radians.
#define CORRECTION_WAVEFORM_GOAL 0.001
// this is a phase in radians.
#define CORRECTION_WAVEFORM_ERROR_THRESHOLD 0.5
// Typically 0. We typically have this plugged into a DC Block anyways.
#define DC_OFFSET 0
// in hertz
#define NIAWG_FILTER_FREQENCY 80000000

//
#define PICTURE_PALETTE_SIZE 256
#define RAW_COUNTS "Raw Counts"
#define CAMERA_PHOTONS "Camera Photons"
#define ATOM_PHOTONS "Atom Photons"


/// Agilent Parameters
#define AGILENT_DEFAULT_POWER 3.5

#define NUMBER_OF_LIBRARY_FILES MAX_NIAWG_SIGNALS*4

/// Random other Constants
// It's PI.
#define PI 3.14159265358979323846264338327950288
// This is the length of time waited before the code decides to update your syntax coloring after a change is made.
#define SYNTAX_TIMER_LENGTH 1000

// Parameters that the user might want to change:
const bool CONST_POWER_OUTPUT = true;

// for floating point error... 0.2 was picked because this is the maximum power that can be outputted with 5 signals 
// given the voltage restrictions.

/// September 15th, 2017: Changed value from 0.2 to 0.1 in preparation of doing 10 traps, also attempting to lower
/// going to aom for debugging purposes on the Rearrangement algorithms.
/// IF CHANGE MAKE SURE TO CHANGE LIBRARY FILE ADDRESS !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
const double TOTAL_POWER = 0.1 - 1e-10;

// Currently bugs with the 5451 for sample rates significantly above this sample rate (320 MS/s). <---- very much T.T T.T T.T
/// IF CHANGE MAKE SURE TO CHANGE LIBRARY FILE ADDRESS !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
const UINT NIAWG_SAMPLE_RATE = 320000000; /// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
/// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
/// This is important. If you don't change the libary file, you will be running waveforms that were compiled with a different sample rate. 
/// This would probably cause the code to throw weird errors since the number of samples in the file wouldn't match what was needed at the 
/// given sample rate.

/// Old Communication Parameters for communication with the old master computer.
#define DEFAULT_PORT "10010"
const char * const SERVER_ADDRESS = "192.168.236.1";

/// Control IDs ///
// All of these #defines are specifically chosen to match the id's of corresponding controls that I need
// to watch for input. Mostly this is for message maps for the various windows mentioned below. The exact value here
// doesn't matter at all, it just matters that it matches the corresponding control ID. Around the ID definitions for
// the controls of interest, there are throw statements that stop the program early on if an ID doesn't match, so 
// you don't have to worry about these things so much.

// Main Window
#define IDC_MAIN_STATUS_BUTTON 11000
#define IDC_ERROR_STATUS_BUTTON 11001
#define IDC_DEBUG_STATUS_BUTTON 11002
#define IDC_EXPERIMENT_COMBO 11003
#define IDC_CATEGORY_COMBO 11004
#define IDC_CONFIGURATION_COMBO 11005
#define IDC_SELECT_CONFIG_COMBO 11006
#define IDC_SEQUENCE_COMBO 11007
#define IDC_MAIN_OPTIONS_RANGE_BEGIN 11008
#define IDC_MAIN_OPTIONS_RANGE_END 11009
#define IDC_DEBUG_OPTIONS_RANGE_BEGIN 11010
#define IDC_DEBUG_OPTIONS_RANGE_END 11018
#define IDC_SHOW_TTLS 11019
#define IDC_SHOW_DACS 11020
#define IDC_SMS_TEXTING_LISTVIEW 10021
#define IDC_CONFIGURATION_NOTES 10022
#define IDC_REPETITION_EDIT 10023
#define IDC_ENTER_EMAIL_INFO 10024
// Scripting Window

//#define IDC_MOOG_FUNCTION_COMBO 12001
//#define IDC_MOOG_EDIT 12002
#define IDC_AWG_FUNCTION_COMBO 12001
#define IDC_AWG_EDIT 12002
#define IDC_GMOOG_FUNCTION_COMBO 12003
#define IDC_GMOOG_EDIT 12004
//#define IDC_VERTICAL_NIAWG_FUNCTION_COMBO 12001
//#define IDC_VERTICAL_NIAWG_EDIT 12002
//#define IDC_HORIZONTAL_NIAWG_FUNCTION_COMBO 12003
//#define IDC_HORIZONTAL_NIAWG_EDIT 12004

#define IDC_DDS_FUNCTION_COMBO 12005
#define IDC_DDS_EDIT 12006

//#define IDC_INTENSITY_CHANNEL1_BUTTON 12005
//#define IDC_INTENSITY_CHANNEL2_BUTTON 12006
//#define IDC_INTENSITY_SYNC_BUTTON 12007
//#define IDC_INTENSITY_AGILENT_COMBO 12008
//#define IDC_INTENSITY_FUNCTION_COMBO 12009
//#define IDC_INTENSITY_EDIT 12010
//#define IDC_INTENSITY_PROGRAM 12011

#define IDC_MASTER_FUNCTION_COMBO 12012
#define IDC_MASTER_EDIT 12013

// Camera Window
#define IDC_ALERTS_BOX 23001
#define IDC_SET_ANALYSIS_LOCATIONS 23002
#define IDC_SET_GRID_CORNER 23003
#define IDC_PLOTTING_LISTVIEW 23004
#define IDC_CAMERA_MODE_COMBO 23005
#define IDC_SET_EM_GAIN_BUTTON 23006
#define IDC_TRIGGER_COMBO 23007
#define IDC_SET_TEMPERATURE_BUTTON 23008
#define IDC_SET_TEMPERATURE_OFF_BUTTON 23009
#define PICTURE_SETTINGS_ID_START 23010
#define PICTURE_SETTINGS_ID_END 23038
// #define IDC_SET_IMAGE_PARAMETERS_BUTTON 23045
#define IDC_SET_REPETITONS_PER_VARIATION_BUTTON 23046
#define IDC_SET_VARIATION_NUMBER 23047
#define IDC_PICTURE_1_MIN_EDIT 23048
#define IDC_PICTURE_1_MAX_EDIT 23049
#define IDC_PICTURE_2_MIN_EDIT 23050
#define IDC_PICTURE_2_MAX_EDIT 23051
#define IDC_PICTURE_3_MIN_EDIT 23052
#define IDC_PICTURE_3_MAX_EDIT 23053
#define IDC_PICTURE_4_MIN_EDIT 23054
#define IDC_PICTURE_4_MAX_EDIT 23055
//
#define IDC_BEGINNING_DIALOG_RICH_EDIT 100
//

#define SYNTAX_TIMER_ID 500
#define SYNTAX_TIMER_LENGTH 1000

/// Auxiliary Window
#define SET_REPETITION_ID 14001
#define TTL_HOLD 14002
#define IDC_ZERO_TTLS 14003
#define IDC_SEQUENCE_DISPLAY 14004
#define TTL_ID_BEGIN 14005
#define TTL_ID_END 14069
#define ID_DAC_SET_BUTTON 14070
#define IDC_ZERO_DACS 14081
#define ID_DAC_FIRST_EDIT 14072
#define ID_DAC_LAST_EDIT 14096
// TEKTRONICS STUFF
#define TOP_BOTTOM_PROGRAM 14097
#define TOP_ON_OFF 14098
#define TOP_FSK 14099
#define BOTTOM_ON_OFF 14100
#define BOTTOM_FSK 14101
#define EO_AXIAL_PROGRAM 14102
#define EO_ON_OFF 14103
#define EO_FSK 14104
#define AXIAL_ON_OFF 14105
#define AXIAL_FSK 14106
// AGILENT STUFF
#define IDC_TOP_BOTTOM_CHANNEL1_BUTTON 14107
#define IDC_TOP_BOTTOM_CHANNEL2_BUTTON 14108
#define IDC_TOP_BOTTOM_SYNC_BUTTON 14109
#define IDC_TOP_BOTTOM_AGILENT_COMBO 14110
#define IDC_TOP_BOTTOM_FUNCTION_COMBO 14111
#define IDC_TOP_BOTTOM_EDIT 14112
#define IDC_TOP_BOTTOM_PROGRAM 14113
#define IDC_AXIAL_CHANNEL1_BUTTON 14114
#define IDC_AXIAL_CHANNEL2_BUTTON 14115
#define IDC_AXIAL_SYNC_BUTTON 14116
#define IDC_AXIAL_AGILENT_COMBO 14117
#define IDC_AXIAL_FUNCTION_COMBO 14118
#define IDC_AXIAL_EDIT 14119
#define IDC_AXIAL_PROGRAM 14120
#define IDC_FLASHING_CHANNEL1_BUTTON 14121
#define IDC_FLASHING_CHANNEL2_BUTTON 14122
#define IDC_FLASHING_SYNC_BUTTON 14123
#define IDC_FLASHING_AGILENT_COMBO 14124
#define IDC_FLASHING_FUNCTION_COMBO 14125
#define IDC_FLASHING_EDIT 14126
#define IDC_FLASHING_PROGRAM 14127
#define IDC_UWAVE_CHANNEL1_BUTTON 14128
#define IDC_UWAVE_CHANNEL2_BUTTON 14129
#define IDC_UWAVE_SYNC_BUTTON 14130
#define IDC_UWAVE_AGILENT_COMBO 14131
#define IDC_UWAVE_FUNCTION_COMBO 14132
#define IDC_UWAVE_EDIT 14133
#define IDC_UWAVE_PROGRAM 14134
//
#define IDC_GLOBAL_VARS_LISTVIEW 14135
#define IDC_CONFIG_VARS_LISTVIEW 14136
#define IDC_TOP_BOTTOM_CALIBRATION_BUTTON 14137
#define IDC_AXIAL_CALIBRATION_BUTTON 14138
#define IDC_FLASHING_CALIBRATION_BUTTON 14139
#define IDC_INTENSITY_CALIBRATION_BUTTON 14140
#define IDC_UWAVE_CALIBRATION_BUTTON 14141

#define UWAVE_AGILENT_TRIGGER_ROW 3
#define UWAVE_AGILENT_TRIGGER_NUM 1
#define TOP_BOTTOM_AGILENT_TRIGGER_ROW 0
#define TOP_BOTTOM_AGILENT_TRIGGER_NUM 13
#define AXIAL_AGILENT_TRIGGER_ROW 3
#define AXIAL_AGILENT_TRIGGER_NUM 3
#define FLASHING_AGILENT_TRIGGER_ROW 0
#define FLASHING_AGILENT_TRIGGER_NUM 0
#define INTENSITY_AGILENT_TRIGGER_ROW 1
#define INTENSITY_AGILENT_TRIGGER_NUM 6

//
//const agilentSettings UWAVE_AGILENT_SETTINGS = { 
//												// safemode option											
//												UWAVE_SAFEMODE, 
//												// usb address
//												UWAVE_AGILENT_USB_ADDRESS,
//												// sample rate (Hz)
//												10e6, 
//												// impedance (ohms, or inf)
//												"50", 
//												// the output filter state (controls rounding & overshoot issues 
//												// between samples)
//												"NORMal",
//												// Memory location, whether the device will save waveforms to 
//												// the internal 64MB Memory buffer or to an external USB drive, which
//												// can (obviously) have much more space.f
//												"INT",
//												// various control IDs (no need to change)
//												 IDC_UWAVE_CHANNEL1_BUTTON, IDC_UWAVE_CHANNEL2_BUTTON, 
//												 IDC_UWAVE_SYNC_BUTTON, IDC_UWAVE_AGILENT_COMBO,
//												 IDC_UWAVE_FUNCTION_COMBO, IDC_UWAVE_EDIT, IDC_UWAVE_PROGRAM, 
//												 IDC_UWAVE_CALIBRATION_BUTTON,
//												 UWAVE_AGILENT_TRIGGER_ROW, UWAVE_AGILENT_TRIGGER_NUM };
//
//const agilentSettings TOP_BOTTOM_AGILENT_SETTINGS = { TOP_BOTTOM_AGILENT_SAFEMODE, TOP_BOTTOM_AGILENT_USB_ADDRESS,
//													  1e6, "INF", "NORMal", "INT",
//													  IDC_TOP_BOTTOM_CHANNEL1_BUTTON, IDC_TOP_BOTTOM_CHANNEL2_BUTTON,
//													  IDC_TOP_BOTTOM_SYNC_BUTTON, IDC_TOP_BOTTOM_AGILENT_COMBO,
//													  IDC_TOP_BOTTOM_FUNCTION_COMBO, IDC_TOP_BOTTOM_EDIT, 
//													  IDC_TOP_BOTTOM_PROGRAM, IDC_TOP_BOTTOM_CALIBRATION_BUTTON,
//													  TOP_BOTTOM_AGILENT_TRIGGER_ROW, TOP_BOTTOM_AGILENT_TRIGGER_NUM };
//
//const agilentSettings AXIAL_AGILENT_SETTINGS = { AXIAL_AGILENT_SAFEMODE, AXIAL_AGILENT_USB_ADDRESS,
//												 1e6, "INF", "NORMal", "INT",
//												 IDC_AXIAL_CHANNEL1_BUTTON, IDC_AXIAL_CHANNEL2_BUTTON,
//												 IDC_AXIAL_SYNC_BUTTON, IDC_AXIAL_AGILENT_COMBO,
//												 IDC_AXIAL_FUNCTION_COMBO, IDC_AXIAL_EDIT, IDC_AXIAL_PROGRAM,
//												 IDC_AXIAL_CALIBRATION_BUTTON,
//												 AXIAL_AGILENT_TRIGGER_ROW, AXIAL_AGILENT_TRIGGER_NUM };
//
//const agilentSettings FLASHING_AGILENT_SETTINGS = { FLASHING_SAFEMODE, FLASHING_AGILENT_USB_ADDRESS,
//													1e6, "INF", "NORMal", "INT",
//													IDC_FLASHING_CHANNEL1_BUTTON, IDC_FLASHING_CHANNEL2_BUTTON,
//													IDC_FLASHING_SYNC_BUTTON, IDC_FLASHING_AGILENT_COMBO,
//													IDC_FLASHING_FUNCTION_COMBO, IDC_FLASHING_EDIT, 
//													IDC_FLASHING_PROGRAM, IDC_FLASHING_CALIBRATION_BUTTON,
//													FLASHING_AGILENT_TRIGGER_ROW, FLASHING_AGILENT_TRIGGER_NUM };

//const agilentSettings INTENSITY_AGILENT_SETTINGS = { INTENSITY_SAFEMODE, INTENSITY_AGILENT_USB_ADDRESS,
//													 1e6, "INF", "NORMal", "USB",
//													 IDC_INTENSITY_CHANNEL1_BUTTON, IDC_INTENSITY_CHANNEL2_BUTTON,
//													 IDC_INTENSITY_SYNC_BUTTON, IDC_INTENSITY_AGILENT_COMBO,
//													 IDC_INTENSITY_FUNCTION_COMBO, IDC_INTENSITY_EDIT,
//													 IDC_INTENSITY_PROGRAM, IDC_INTENSITY_CALIBRATION_BUTTON,
//													 INTENSITY_AGILENT_TRIGGER_ROW, INTENSITY_AGILENT_TRIGGER_NUM };

// plot designer
#define IDC_GENERAL_PLOT_TYPE 15008
#define IDC_PLOT_CREATOR_DATASET_COMBO 15010
#define IDC_PRC_PICTURE_NUMBER 15014
#define IDC_PRC_PIXEL_NUMBER 15016
#define IDC_PRC_ATOM 15017
#define IDC_PRC_NOATOM 15018
#define IDC_PRC_SHOW_ALL 15019
#define IDC_PIXELS_PER_ANALYSIS_GROUP 15029
#define IDC_PSC_CONDITION_NUMBER 15038
#define IDC_PSC_PICTURE_NUMBER 15040
#define IDC_PSC_PIXEL_NUMBER 15042
#define IDC_PSC_ATOM 15043
#define IDC_PSC_NOATOM 15044
#define IDC_PSC_SHOW_ALL 15045
#define IDC_PLOT_CREATOR_SAVE 15046
#define IDC_PLOT_CREATOR_CANCEL 15047

#define NO_FIT 16002
#define REAL_TIME_FIT 16003
#define FIT_AT_END 16004
#define GAUSSIAN_FIT 16005
#define LORENTZIAN_FIT 16006
#define SINE_FIT 16007

#define MASTER_SCRIPT_EXTENSION "mScript"
#define NIAWG_SCRIPT_EXTENSION "nScript"
#define AGILENT_SCRIPT_EXTENSION "aScript"
#define CONFIG_EXTENSION "Config"
#define SEQUENCE_EXTENSION "sConfig"
#define FUNCTION_EXTENSION "func"
#define PLOTTING_EXTENSION "plot"

//#define MOOG_SCRIPT_EXTENSION "moogScript"
#define AWG_SCRIPT_EXTENSION "awgScript"
#define GIGAMOOG_SCRIPT_EXTENSION "gmoogScript"
#define DDS_SCRIPT_EXTENSION "ddsScript"

#define OSCILLOSCOPE_TRIGGER "A7"

#define NULL_SEQUENCE "NULL_SEQUENCE"

// in MILIWATTS
#define RSG_ADDRESS 28
#define RSG_POWER 10

// Don't change! Or only change if you really kow what you are doing. Changing this risks overloading our RF amplifiers 
// and large-aperture AOMs. Current Value: 5
const float MAX_GAIN = 5.0; // Current Value: 5
							// Current Value: 5


// help text
const char AGILENT_INFO_TEXT[] = ">>> Scripted Agilent Waveform Help <<<\n"
"Accepted Commands (syntax for command is encased in <>)\n"
"- hold <val> <time(ms)> <Continuation Type> <Possibly Repeat #> <#>\n"
"- ramp <type> <initVal> <finVal(V)> <time(ms)> <Continuation Type> <Possibly Repeat #> <#>\n"
"- pulse <pulse type> <offset> <amp> <pulse-width> <time(ms)> <Continuation Type> <Possibly Repeat #> <#>\n"
"- modPulse <pulse-type> <offset> <amp> <pulse-width> <mod-Freq(MHz)> <mod-Phase(Rad)> <time(ms)> <Continuation Type> <Repeat #>\n"
"The continuation type determines what the agilent does when it reaches the end of the <time> \n"
"argument. Accepted Values for the continuation type are:\n"
"- repeat <requires repeat #>\n"
"- repeatUntilTrig\n"
"- once\n"
"- repeatForever\n"
"- onceWaitTrig\n"
"Accepted ramp types are:\n"
"- nr (no ramp)\n"
"- lin\n"
"- tanh\n"
"Accepted pulse types are:\n"
"- sech, ~ sech(time/width)\n"
"- gaussian, width = gaussian sigma\n"
"- lorentzian, width = FWHM (curve is normalized)\n";

const char MOOG_INFO_TEXT[] =
">>> This is a script for programming the Megamoogs. <<<\n"
"- the input format is referenced below using angled brackets <...>. Place the input on\n"
" the line below the command in the format specified.\n"
"- The associated c++ code has been designed to be flexible when it comes to trailing white spaces at the ends of\n"
" lines and in between commands, so use whatever such formatting pleases your eyes.\n"
"Accepted Commands:\n"
"(A) Loop types:\n"
"linloop Start channel # (indexed from 0), stop channel #, <setting (function from (B))>, start param, param step size> - sets various channel parameters with linear spacing\n"
"(B) Set parameters:\n"
"startfreq, stopfreq <channel #, frequency in MHz>\n"
"loadphase, movephase <channel #, phase>\n"
"gain <channel #, gain>, gain ranges from 0 to 100\n"
"onoff <binary>, binary refers to a 32 bit unsigned #, with each bit representing the on off state of the relevant channel\n"
"step <stepsize>, stepsize is a 10-bit unsigned number. LSB = 25MHz/sec.\n"
"(C) Software triggers:\n"
"move, load, no inputs. Mostly just for debugging since actual experiment would use external TTL triggers\n"
;

const char AWG_INFO_TEXT[] =
">>> This is a script for programming the fpga AWG (subharmonicon). <<<\n"
"- the input format is referenced below using angled brackets <...>. Place the input on\n"
" the line below the command in the format specified.\n"
"- The associated c++ code has been designed to be flexible when it comes to trailing white spaces at the ends of\n"
" lines and in between commands, so use whatever such formatting pleases your eyes.\n"
"Accepted Commands:\n"
"(A) Single snapshots:\n"
"Set a single snapshot at a specific time. Note that script must be time-ordered.\n"
"setsingle <channel (e.g. 0b0001), time, amp, freq, phase jump toggle (0 or 1), phase (in degrees, only used if toggle enabled)>\n"
"(A) Step size:\n"
"The step size, and number of steps, must be declared before any ramp that occurs during those steps.\n"
"setsteps <channel (e.g. 0b0001), step size, start time, end time (all in us)>\n"
"Note that the initial step MUST be at time 0.\n"
"(B) Ramp types:\n"
"Linear ramps for frequency and amplitude - note that both amplitude and frequency settings MUST fully cover range of step settings.\n"
"linear amplitude ramp: amplin <channel, start time, end time (us), start amplitude, end amplitude (percent)>\n"
"Gaussian amplitude ramp: amplin <channel, start time, end time (us), sigma, direction (+1 for peak at end, -1 for peak at beginning), start amplitude, end amplitude (percent)>\n"
"linear frequency ramp: freqlin <channel, start time, end time (us), start frequency, end frequency (MHz), phase jump toggle (0 or 1), start phase (in degrees, only used if toggle enabled)>\n"
"(C) Once ramps for one channel programmed, must write settings with program <channel>.\n"
"(D) Software triggers:\n"
"reset, trigger, no inputs. Mostly just for debugging since actual experiment would use external TTL triggers\n"
;

const char GIGAMOOG_INFO_TEXT[] =
">>> This is a script for programming the Gigamoogs. <<<\n"
"- the input format is referenced below using angled brackets <...>. Place the input on\n"
" the line below the command in the format specified.\n"
"- The associated c++ code has been designed to be flexible when it comes to trailing white spaces at the ends of\n"
" lines and in between commands, so use whatever such formatting pleases your eyes.\n"
"Accepted Commands:\n"
"(A) set:\n"
"DAC number, channel number, amplitude (%), frequency (MHz), phase (degrees)."
"(B) setmove:\n"
"Snapshot ID, DAC number, channel number, instant frequency jump toggle, phase jump toggle, amplitude (%), amplitude increment, frequency (MHz), frequency increment, phase (degrees).\n"
"Note that step increments must be of correct sign."
"(C) hardreset:\n"
"sets all output and move settings to 0 amp 0 freq.\n"
"(D) rearrange:\n"
"rearrange <ampStep> <freqStep>\n"
"initX <boolean string with 1 in x axis load locations>\n"
"initY <boolean string with 1 in y axis load locations>\n"
"targetStart <boolean 2D array for target locations> targetEnd\n"

;

const char DDS_INFO_TEXT[] =
">>> This is a script for programming the minimoogs (FPGA controlled DDS boards). <<<\n"
"- the input format is referenced below using angled brackets <...>. Place the input on\n"
" the line below the command in the format specified.\n"
"- The associated c++ code has been designed to be flexible when it comes to trailing white spaces at the ends of\n"
" lines and in between commands, so use whatever such formatting pleases your eyes.\n"
"Single output commands:\n"
"set <device #> <channel #> <frequency in MHz> <amplitude from 1-100>\n"
"\n"
"Toggling and sweeping commands:\n"
"Set sequence of \"snapshot\" commands. Each snapshot must contain, in order:\n"
"Number of steps in ramp \"reps\". This sets the ramp time by reps * DDS write cycle time, which is 8us.\n"
"  For toggling, use a rep of 1. The end of the sequence of snapshots should be marked by a snapshot with 0 reps.\n"
"Channel frequencies, \"freqs\", in MHz.\n"
"  These should appear in order of device 0 channels 0-3, device 1 channels 0-3.\n"
"Channel amplitudes, \"amps\", in percent of max amplitude, appearing in same order as freqs.\n"
"TEMPORARY NOTE: Currently, snapshot 0 sets the initial frequency and amplitude of all channels.\n"
"Subsequent snapshots set the DELTAS of these values, NOT absolute values.\n"
"Eventually there will be better handling for this.\n"
;

//
const char SCRIPT_INFO_TEXT[] =
">>> This is a script for programming the NI AWG 5451. <<<\n"
"- the input format is referenced below using angled brackets <...>. Place the input on\n"
" the line below the command in the format specified.\n"
"- The ramping type options are currently \"lin\", \"tanh\" and \"nr\".\n"
"- The associated c++ code has been designed to be flexible when it comes to trailing white spaces at the ends of\n"
" lines and in between commands, so use whatever such formatting pleases your eyes.\n"
"Accepted Commands:\n"
"(a)Wait Commands\n"
"\"waitTilTrig\"\n"
"\"waitSet# <# of samples to wait>\"\n"
"(b)Repeat Commands\n"
"\"repeatSet# <# of times to repeat>\"\n"
"\"repeatTilTrig\"\n"
"\"repeatForever\"\n"
"\"endRepeat\"\n"
"(c)Logic Commands\n"
"\"ifTrig\"\n"
"\"else\"\n"
"\"endIf\"\n"
"(d)Constant Waveforms\n"
"\"gen2const <freq1> <amp1> <phase1 (rad)>; <sim for 2nd>; <time> <t manage>\"\n"
"(e)Amplitude Ramps\n"
"\"gen2ampramp <freq1> <amp1 ramp type> <initial amp1> <final amp1> <phase1 (rad)>; <sim for 2nd>; <time> <t manage>\"\n"
"(f)frequency Ramps\n"
"\"gen2freq ramp <freq1 ramp type> <initial freq1> <final freq1> <amp1> <phase1 (rad)>; <sim for 2nd>; <time> <t manage>\"\n"
"Etc.\n"
"(g)Amplitude and Frequency Ramps\n"
"\"gen2freq&ampramp <freq1 ramp type> <init freq1> <fin freq1> <amp ramp1 type> <init ramp1> <fin ramp1> <phase1 (rad)>;...\n"
"...<similar for 2nd>; <time> <t manage>\"\n"
"(j)Create marker event after last waveform\n"
"\"markerEvent <samples after previous waveform to wait>\"\n";

const char MASTER_HELP[] = "This is a script for programming master timing for TTLs, DACs, the RSG, and the raman outputs.\n"
"Acceptable Commands:\n"
"-      t++\n"
"-      t+= [number] (space between = and number required)\n"
"-      t= [number] (space between = and number required)\n"
"-      on: [ttlName]\n"
"-      off: [ttlName]\n"
"-      pulseon: [ttlName] [pulseLength]\n"
"-      pulseoff: [ttlName] [pulseLength]\n"
"-      dac: [dacName] [voltage]\n"
"-      dacarange: [dacName] [initValue] [finalValue] [rampTime] [rampInc]\n"
"-      daclinspace: [dacName] [initValue] [finalValue] [rampTime] [numberOfSteps]\n"
"-      rsg: [frequency to add] [Power at that frequency (dBm)]\n"
"-      def [functionName]([functionArguments]):\n"
"-      call [functionName(argument1, argument2, etc...)]\n"
"-      repeat: [numberOfTimesToRepeat]\n"
"-           %Commands...\n"

"-      end % (of repeat)\n"
"-      callcppcode\n"
"-      % marks a line as a comment. %% does the same and gives you a different color.\n"
"-      extra white-space is generally fine and doesn't screw up analysis of the script. Format as you like.\n"
"-      Simple Math (+-/*) is supported in the scripts as well. To insert a mathematical expresion, just \n"
"-      add parenthesis () around the full expression";

// a colormap that I use for gnuplot stuffs.
const std::vector<std::string> GIST_RAINBOW{
	"ff0028",
	"ff0023",
	"ff001e",
	"ff0018",
	"ff0013",
	"ff000e",
	"ff0008",
	"ff0003",
	"ff0100",
	"ff0700",
	"ff0c00",
	"ff1200",
	"ff1700",
	"ff1c00",
	"ff2200",
	"ff2700",
	"ff2d00",
	"ff3200",
	"ff3700",
	"ff3d00",
	"ff4200",
	"ff4800",
	"ff4d00",
	"ff5200",
	"ff5800",
	"ff5d00",
	"ff6300",
	"ff6800",
	"ff6e00",
	"ff7300",
	"ff7800",
	"ff7e00",
	"ff8300",
	"ff8900",
	"ff8e00",
	"ff9300",
	"ff9900",
	"ff9e00",
	"ffa400",
	"ffa900",
	"ffae00",
	"ffb400",
	"ffb900",
	"ffbf00",
	"ffc400",
	"ffc900",
	"ffcf00",
	"ffd400",
	"ffda00",
	"ffdf00",
	"ffe400",
	"ffea00",
	"ffef00",
	"fff500",
	"fffa00",
	"feff00",
	"f8ff00",
	"f3ff00",
	"edff00",
	"e8ff00",
	"e3ff00",
	"ddff00",
	"d8ff00",
	"d2ff00",
	"cdff00",
	"c7ff00",
	"c2ff00",
	"bdff00",
	"b7ff00",
	"b2ff00",
	"acff00",
	"a7ff00",
	"a2ff00",
	"9cff00",
	"97ff00",
	"91ff00",
	"8cff00",
	"87ff00",
	"81ff00",
	"7cff00",
	"76ff00",
	"71ff00",
	"6cff00",
	"66ff00",
	"61ff00",
	"5bff00",
	"56ff00",
	"51ff00",
	"4bff00",
	"46ff00",
	"40ff00",
	"3bff00",
	"36ff00",
	"30ff00",
	"2bff00",
	"25ff00",
	"20ff00",
	"1bff00",
	"15ff00",
	"10ff00",
	"0aff00",
	"05ff00",
	"00ff00",
	"00ff05",
	"00ff0a",
	"00ff10",
	"00ff15",
	"00ff1a",
	"00ff20",
	"00ff25",
	"00ff2b",
	"00ff30",
	"00ff35",
	"00ff3b",
	"00ff40",
	"00ff45",
	"00ff4b",
	"00ff50",
	"00ff56",
	"00ff5b",
	"00ff60",
	"00ff66",
	"00ff6b",
	"00ff70",
	"00ff76",
	"00ff7b",
	"00ff81",
	"00ff86",
	"00ff8b",
	"00ff91",
	"00ff96",
	"00ff9b",
	"00ffa1",
	"00ffa6",
	"00ffac",
	"00ffb1",
	"00ffb6",
	"00ffbc",
	"00ffc1",
	"00ffc6",
	"00ffcc",
	"00ffd1",
	"00ffd7",
	"00ffdc",
	"00ffe1",
	"00ffe7",
	"00ffec",
	"00fff1",
	"00fff7",
	"00fffc",
	"00fbff",
	"00f6ff",
	"00f1ff",
	"00ebff",
	"00e6ff",
	"00e0ff",
	"00dbff",
	"00d5ff",
	"00d0ff",
	"00caff",
	"00c5ff",
	"00c0ff",
	"00baff",
	"00b5ff",
	"00afff",
	"00aaff",
	"00a4ff",
	"009fff",
	"009aff",
	"0094ff",
	"008fff",
	"0089ff",
	"0084ff",
	"007eff",
	"0079ff",
	"0074ff",
	"006eff",
	"0069ff",
	"0063ff",
	"005eff",
	"0058ff",
	"0053ff",
	"004dff",
	"0048ff",
	"0043ff",
	"003dff",
	"0038ff",
	"0032ff",
	"002dff",
	"0027ff",
	"0022ff",
	"001dff",
	"0017ff",
	"0012ff",
	"000cff",
	"0007ff",
	"0001ff",
	"0300ff",
	"0800ff",
	"0e00ff",
	"1300ff",
	"1900ff",
	"1e00ff",
	"2400ff",
	"2900ff",
	"2f00ff",
	"3400ff",
	"3900ff",
	"3f00ff",
	"4400ff",
	"4a00ff",
	"4f00ff",
	"5500ff",
	"5a00ff",
	"5f00ff",
	"6500ff",
	"6a00ff",
	"7000ff",
	"7500ff",
	"7b00ff",
	"8000ff",
	"8500ff",
	"8b00ff",
	"9000ff",
	"9600ff",
	"9b00ff",
	"a100ff",
	"a600ff",
	"ac00ff",
	"b100ff",
	"b600ff",
	"bc00ff",
	"c100ff",
	"c700ff",
	"cc00ff",
	"d200ff",
	"d700ff",
	"dc00ff",
	"e200ff",
	"e700ff",
	"ed00ff",
	"f200ff",
	"f800ff",
	"fd00ff",
	"ff00fb",
	"ff00f5",
	"ff00f0",
	"ff00ea",
	"ff00e5",
	"ff00df",
	"ff00da",
	"ff00d4",
	"ff00cf",
	"ff00ca",
	"ff00c4",
	"ff00bf"
};

const std::vector<std::string> GNUPLOT_MARKERS{ "pt 5",
												"pt 7",
												"pt 9",
												"pt 11",
												"pt 13",
												"pt 15",
												"pt 1",
												"pt 3",
												"pt 6"};

const std::vector<std::string> GNUPLOT_LINETYPES{ "dt 1",
												  "dt 2",
												  "dt 3",
												  "dt 4"};

const std::string GNUPLOT_LOCATION = "\"C:\\Program Files (x86)\\gnuplot\\bin\\gnuplot.exe\"";
