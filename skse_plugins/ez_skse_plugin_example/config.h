#pragma once
#include "skse/skse_version.h" // SKSE
#include "IVersionCheck.h" // Common plugin version check, found in ..\plugins_common\
// #include "../plugin_common/common.h" // EG: Common plugin functions for this sdk if needed

// ================================
// Plugin Information
// ================================

// Plugin info
#define PLUGIN_AUTHOR				"Ez0n3"					// Author of the plugin

#define PLUGIN_NAME_SHORT			"ez_skse_plugin_example"	// Plugin name without spaces	// FIXME - this should be the namespace in the vcxproj??? Use Prop instead???
#define PLUGIN_NAME_LONG			"Ez SKSE Plugin Example"	// Plugin name with spaces 		// FIXME - this should be the name of the project in the vcxproj??? Use Prop instead???

// Plugin version, Major, Minor, Build. EG: (1.0.0) equals (Major.Minor.Build)
#define PLUGIN_VERSION_MAJOR		1
#define PLUGIN_VERSION_MINOR		0
#define PLUGIN_VERSION_BUILD		0

// ================================
// Nothing below this needs changing between plugins except maybe MINIMUM_RUNTIME_VERSION and/or SUPPORTED_RUNTIME_VERSION_STRICT
// ================================

// Plugin log file
#define PLUGIN_LOG_FILE				"\\My Games\\" GAME_SAVE_FOLDER_NAME("Skyrim") "\\SKSE\\" PLUGIN_LOG_FILE_NAME(PLUGIN_NAME_SHORT) // plugin log file location

// Common definitions
#define SDK_VERSION_STRING			VERSION_TO_STRING(SKSE_VERSION_INTEGER, SKSE_VERSION_INTEGER_MINOR, SKSE_VERSION_INTEGER_BETA)
#define PLUGIN_VERSION_STRING		VERSION_TO_STRING(PLUGIN_VERSION_MAJOR, PLUGIN_VERSION_MINOR, PLUGIN_VERSION_BUILD)

#define PLUGIN_VERSION_DLL			MAKE_EXE_VERSION(PLUGIN_VERSION_MAJOR, PLUGIN_VERSION_MINOR, PLUGIN_VERSION_BUILD)
#define PLUGIN_VERSION_INFO			PLUGIN_NAME_SHORT " v%s (0x%08X) (SDK v%s)", PLUGIN_VERSION_STRING, PLUGIN_VERSION_DLL, SDK_VERSION_STRING

// ================================
// Plugin Version Information
// ================================

// The minimum runtime version allowed by the plugin. EG: I need function X, which was added in runtime Y, therefore Y is the minimum runtime version
#define MINIMUM_RUNTIME_VERSION				RUNTIME_VERSION_1_1_21_0 // The lowest version

// The runtime version the plugin was designed for
// #define SUPPORTED_RUNTIME_VERSION		CURRENT_RELEASE_RUNTIME
#define SUPPORTED_RUNTIME_VERSION			RUNTIME_VERSION // Set in /config/_Plugins.props, controls core and plugin versions - normally latest

// Strict runtime version. If strict=true, runtime and supported versions must match. If strict=false, runtime version must be above the minimum
#define SUPPORTED_RUNTIME_VERSION_STRICT	false

// The compatible runtime version - set automatically
#define COMPATIBLE(runtimeVersion)			(runtimeVersion == SUPPORTED_RUNTIME_VERSION)

// ================================

/*
// From skse_version.h

#define RUNTIME_VERSION_1_1_21_0	MAKE_SKYRIM_VERSION(1, 21, 0)		// 0x01150000
#define RUNTIME_VERSION_1_2_12_0	MAKE_SKYRIM_VERSION(2, 12, 0)		// 0x020C0000
#define RUNTIME_VERSION_1_3_7_0		MAKE_SKYRIM_VERSION(3, 7, 0)		// 0x03070000
#define RUNTIME_VERSION_1_3_10_0	MAKE_SKYRIM_VERSION(3, 10, 0)		// 0x030A0000
#define RUNTIME_VERSION_1_4_15_0	MAKE_SKYRIM_VERSION(4, 15, 0)		// 0x040F0000
#define RUNTIME_VERSION_1_4_20_0	MAKE_SKYRIM_VERSION(4, 20, 0)		// 0x04140000
#define RUNTIME_VERSION_1_4_21_0	MAKE_SKYRIM_VERSION(4, 21, 0)		// 0x04150000
#define RUNTIME_VERSION_1_4_25_0	MAKE_SKYRIM_VERSION(4, 25, 0)		// 0x04190000
#define RUNTIME_VERSION_1_4_26_0	MAKE_SKYRIM_VERSION(4, 26, 0)		// 0x041A0000
#define RUNTIME_VERSION_1_4_27_0	MAKE_SKYRIM_VERSION(4, 27, 0)		// 0x041B0000
#define RUNTIME_VERSION_1_5_24_0	MAKE_SKYRIM_VERSION(5, 24, 0)		// 0x05180000
#define RUNTIME_VERSION_1_5_26_0	MAKE_SKYRIM_VERSION(5, 26, 0)		// 0x051A0000
#define RUNTIME_VERSION_1_6_86_0	MAKE_SKYRIM_VERSION(6, 86, 0)		// 0x06560000
#define RUNTIME_VERSION_1_6_87_0	MAKE_SKYRIM_VERSION(6, 87, 0)		// 0x06570000
#define RUNTIME_VERSION_1_6_89_0	MAKE_SKYRIM_VERSION(6, 89, 0)		// 0x06590000
#define RUNTIME_VERSION_1_7_7_0		MAKE_SKYRIM_VERSION(7, 7, 0)		// 0x07070000
#define RUNTIME_VERSION_1_8_145_0	MAKE_SKYRIM_VERSION(8, 145, 0)		// 0x08910000
#define RUNTIME_VERSION_1_8_151_0	MAKE_SKYRIM_VERSION(8, 151, 0)		// 0x08970000
#define RUNTIME_VERSION_1_9_26_0	MAKE_SKYRIM_VERSION(9, 26, 0)		// 0x091A0000
#define RUNTIME_VERSION_1_9_29_0	MAKE_SKYRIM_VERSION(9, 29, 0)		// 0x091D0000
#define RUNTIME_VERSION_1_9_32_0	MAKE_SKYRIM_VERSION(9, 32, 0)		// 0x09200000

#define EDITOR_VERSION_1_9_32_0		MAKE_SKYRIM_VERSION(9, 32, 0)		// 0x09200000	// FIXME - HAS CS VERSION???
*/
