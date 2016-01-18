/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_MAIN_API.h

Copyright (c) 2015 Octasic Inc. All rights reserved.

Description: Contains the definition of the MAIN API.

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU Affero General Public License as published by
the Free Software Foundation; either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU Affero General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.03.00-B560 (2015/08/07)

$Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_MAIN_API_H__
#define __OCTVC1_MAIN_API_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../../octdev_types.h"
#include "../../octdev_devices.h"
#include "../octvc1_msg.h"
#include "../octvc1_handle.h"
#include "../octvc1_fifo.h"
#include "../octvc1_buffer.h"
#include "../octvc1_eth.h"
#include "../octvc1_mac.h"
#include "../octvc1_cursor.h"
#include "../octvc1_list.h"
#include "../octvc1_log.h"
#include "../octvc1_process.h"
#include "../octvc1_api.h"
#include "../octvc1_module.h"

#include "octvc1_main_id.h"
#include "octvc1_main_rc.h"

/************************  COMMON DEFINITIONS  *******************************/


/*-------------------------------------------------------------------------------------
 	Target related definitions.
-------------------------------------------------------------------------------------*/
#define cOCTVC1_MAIN_TARGET_MAX_INFO_BYTE_SIZE				768		 	/* Device info buffer size, in bytes. */
#define cOCTVC1_MAIN_USER_MAX_INFO_BYTE_SIZE				512		 	/* User info buffer size, in bytes. */
#define cOCTVC1_MAIN_USER_INFO_SIZE							0x80	

/*-------------------------------------------------------------------------------------
 	Application related definitions.
-------------------------------------------------------------------------------------*/
#define cOCTVC1_MAIN_APPLICATION_MAX_INFO_BYTE_SIZE			1024	 	/* Application info buffer size, in bytes. */
#define cOCTVC1_MAIN_APPLICATION_MAX_NAME_LENGTH			31		 	/* Application name max length, in bytes. */
#define cOCTVC1_MAIN_APPLICATION_MAX_SHORT_NAME_LENGTH		15		 	/* Application short_name max length, in bytes. */
#define cOCTVC1_MAIN_APPLICATION_MAX_DESCRIPTION_LENGTH		127		 	/* Application description max length, in bytes. */
#define cOCTVC1_MAIN_APPLICATION_MAX_VERSION_LENGTH			31		 	/* Application version max length, in bytes. */
#define cOCTVC1_MAIN_APPLICATION_SYSTEM_MAX_VERSION_LENGTH	512		 	/* System info max length, in bytes. */
#define cOCTVC1_MAIN_APPLICATION_SYSTEM_MAX_PLATFORM_LENGTH	31		 	/* System platform max length, in bytes. */

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_APPLICATION_STATE_ENUM :
-------------------------------------------------------------------------------------*/
#define tOCTVC1_MAIN_APPLICATION_STATE_ENUM					tOCT_UINT32

#define cOCTVC1_MAIN_APPLICATION_STATE_ENUM_STOPPED			0		
#define cOCTVC1_MAIN_APPLICATION_STATE_ENUM_STARTED			1		
#define cOCTVC1_MAIN_APPLICATION_STATE_ENUM_BOOTED			2		

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_APPLICATION_MODULE_STATE_ENUM :
-------------------------------------------------------------------------------------*/
#define tOCTVC1_MAIN_APPLICATION_MODULE_STATE_ENUM			tOCT_UINT32

#define cOCTVC1_MAIN_APPLICATION_MODULE_STATE_ENUM_INVALID	0		
#define cOCTVC1_MAIN_APPLICATION_MODULE_STATE_ENUM_STOPPED	1		
#define cOCTVC1_MAIN_APPLICATION_MODULE_STATE_ENUM_STARTED	2		
#define cOCTVC1_MAIN_APPLICATION_MODULE_STATE_ENUM_ERROR	3		

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_APPLICATION_MODULE_CONFIG_STATE_ENUM :
-------------------------------------------------------------------------------------*/
#define tOCTVC1_MAIN_APPLICATION_MODULE_CONFIG_STATE_ENUM				tOCT_UINT32

#define cOCTVC1_MAIN_APPLICATION_MODULE_CONFIG_STATE_ENUM_INVALID		0		
#define cOCTVC1_MAIN_APPLICATION_MODULE_CONFIG_STATE_ENUM_DEFAULT		1		
#define cOCTVC1_MAIN_APPLICATION_MODULE_CONFIG_STATE_ENUM_PARSE_OK		2		
#define cOCTVC1_MAIN_APPLICATION_MODULE_CONFIG_STATE_ENUM_PARSE_ERROR	3		

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_APPLICATION_MODULE_INFO
 		Application Module information

 Members:
	ulModuleId
 		Current number of process active in this for this module.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MODULE_ID_ENUM	ulModuleId;

} tOCTVC1_MAIN_APPLICATION_MODULE_INFO;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_APPLICATION_MODULE_STATS
 		API Command stats

 Members:
	ulState
 		Current number of process active in this for this module.
	ulConfigState
 		Current number of process active in this for this module.
	ulProcessNum
 		Current number of process active in this for this module.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MAIN_APPLICATION_MODULE_STATE_ENUM			ulState;
	tOCTVC1_MAIN_APPLICATION_MODULE_CONFIG_STATE_ENUM	ulConfigState;
	tOCT_UINT32											ulProcessNum;

} tOCTVC1_MAIN_APPLICATION_MODULE_STATS;

/*-------------------------------------------------------------------------------------
 	API related definitions.
-------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------
 	Heartbeat state.
-------------------------------------------------------------------------------------*/
#define tOCTVC1_MAIN_HEARTBEAT_STATE_ENUM					tOCT_UINT32

#define cOCTVC1_MAIN_HEARTBEAT_STATE_ENUM_STOP				0		
#define cOCTVC1_MAIN_HEARTBEAT_STATE_ENUM_START				1		

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_API_SESSION_HEARTBEAT_CONFIG

 Members:
	ulWaitTimeMs
		Range:		[500..10000]
		Default:	1000
 		Wait time between heartbeats
	ulIdleOnlyFlag
		Default:	cOCT_TRUE
 		If true, heartbeat sent only when API session is idle
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCT_UINT32	ulWaitTimeMs;
	tOCT_BOOL32	ulIdleOnlyFlag;

} tOCTVC1_MAIN_API_SESSION_HEARTBEAT_CONFIG;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_API_SESSION_HEARTBEAT_STATS

 Members:
	ulState
	ulHeartbeatSentCnt
 		Number of heartbeats that were sent
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MAIN_HEARTBEAT_STATE_ENUM	ulState;
	tOCT_UINT32							ulHeartbeatSentCnt;

} tOCTVC1_MAIN_API_SESSION_HEARTBEAT_STATS;

/*-------------------------------------------------------------------------------------
 	FILE related definiitons.
-------------------------------------------------------------------------------------*/
#define cOCTVC1_MAIN_FILE_MAX_DATA_BYTE_SIZE				1200	 	/* File commands (read/write) buffer size, in bytes. */
#define cOCTVC1_MAIN_FILE_NAME_MAX_LENGTH					127		 	/* Filesystem string length restriction. */

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_FILE_SYSTEM_FILE_CURSOR

 Members:
	szFileName
 		NULL terminated name of the file.
	ulGetMode
		Default:	cOCTVC1_OBJECT_CURSOR_ENUM_FIRST
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCT_UINT8					szFileName[(cOCTVC1_MAIN_FILE_NAME_MAX_LENGTH+1)];
	tOCTVC1_OBJECT_CURSOR_ENUM	ulGetMode;

} tOCTVC1_MAIN_FILE_SYSTEM_FILE_CURSOR;

/*-------------------------------------------------------------------------------------
 	API command/response arguments file modes.
-------------------------------------------------------------------------------------*/
#define tOCTVC1_MAIN_FILE_OPEN_MODE_MASK					tOCT_UINT32

#define cOCTVC1_MAIN_FILE_OPEN_MODE_MASK_READ				0x1		
#define cOCTVC1_MAIN_FILE_OPEN_MODE_MASK_WRITE				0x2		

/*-------------------------------------------------------------------------------------
 	LOG related sections.
-------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------
 	Log Trace state.
-------------------------------------------------------------------------------------*/
#define tOCTVC1_MAIN_LOG_TRACE_STATE_ENUM					tOCT_UINT32

#define cOCTVC1_MAIN_LOG_TRACE_STATE_ENUM_STOP				0		
#define cOCTVC1_MAIN_LOG_TRACE_STATE_ENUM_START				1		
#define cOCTVC1_MAIN_LOG_MAX_NUM_FILES						32		 	/* Maximum total number of log files that can be logged to */
#define cOCTVC1_MAIN_LOG_FILE_PREFIX_MAX_LENGTH				(cOCTVC1_MAIN_FILE_NAME_MAX_LENGTH-2)	 	/* Maximum length of the prefix of the log filename */

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_LOG_TRACE_STATS

 Members:
	ulCurrentFileSize
 		Size (in bytes) of the current log file.
	ulCurrentFileIndex
 		The index number of the current log file.
	ulFileOverwriteCnt
 		The number of times the log files were replaced/overwritten.
	ulNumFiles
 		Number of valid log files. Number of indexes in the array.
	abyFileIndexes
 		An array containing log file index numbers.
 		This sequence indicates the order that the log files
 		should be read in.
	szFileNamePrefix
 		Array of bytes containing the prefix of log file name.
 		The buffer name can be up to LOG_FILE_PREFIX_MAX_LENGTH characters long,
 		excluding the terminating NULL character.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCT_UINT32	ulCurrentFileSize;
	tOCT_UINT32	ulCurrentFileIndex;
	tOCT_UINT32	ulFileOverwriteCnt;
	tOCT_UINT32	ulNumFiles;
	tOCT_UINT8	abyFileIndexes[cOCTVC1_MAIN_LOG_MAX_NUM_FILES];
	tOCT_UINT8	szFileNamePrefix[cOCTVC1_MAIN_LOG_FILE_PREFIX_MAX_LENGTH];

} tOCTVC1_MAIN_LOG_TRACE_STATS;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_LOG_TRACE_INFO

 Members:
	ulMaxFileSize
 		The maximum size (in bytes) of each file.
	ulMaxNumFiles
 		Maximum number of files there can be at once.
	szFileNamePrefix
 		Array of bytes containing the prefix of log file name.
 		The buffer name can be up to LOG_FILE_PREFIX_MAX_LENGTH characters long,
 		excluding the terminating NULL character.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCT_UINT32	ulMaxFileSize;
	tOCT_UINT32	ulMaxNumFiles;
	tOCT_UINT8	szFileNamePrefix[cOCTVC1_MAIN_LOG_FILE_PREFIX_MAX_LENGTH];

} tOCTVC1_MAIN_LOG_TRACE_INFO;

/*****************************  METHODS  *************************************/
/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_TARGET_RESET_CMD

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_MAIN_MSG_TARGET_RESET_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_TARGET_RESET_RSP

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_MAIN_MSG_TARGET_RESET_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_TARGET_INFO_CMD

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_MAIN_MSG_TARGET_INFO_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_TARGET_INFO_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ulTargetType
 		Octasic Target type
	abyTargetInfo
	abyUserInfo
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER			Header;
	tOCTDEV_DEVICES_TYPE_ENUM	ulTargetType;
	tOCT_UINT8					abyTargetInfo[cOCTVC1_MAIN_TARGET_MAX_INFO_BYTE_SIZE];
	tOCT_UINT8					abyUserInfo[cOCTVC1_MAIN_USER_MAX_INFO_BYTE_SIZE];

} tOCTVC1_MAIN_MSG_TARGET_INFO_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_LOG_ERASE_CMD

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_MAIN_MSG_LOG_ERASE_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_LOG_ERASE_RSP

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_MAIN_MSG_LOG_ERASE_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_LOG_INFO_CMD

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_MAIN_MSG_LOG_INFO_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_LOG_INFO_RSP

 Members:
	Header
 		OCTVC1 Message Header
	LogInfo
 		Log info structure
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER			Header;
	tOCTVC1_MAIN_LOG_TRACE_INFO	LogInfo;

} tOCTVC1_MAIN_MSG_LOG_INFO_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_LOG_STATS_CMD

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_MAIN_MSG_LOG_STATS_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_LOG_STATS_RSP

 Members:
	Header
 		OCTVC1 Message Header
	LogStats
 		Log stats structure
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER				Header;
	tOCTVC1_MAIN_LOG_TRACE_STATS	LogStats;

} tOCTVC1_MAIN_MSG_LOG_STATS_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_LOG_INFO_TRACE_CMD

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_MAIN_MSG_LOG_INFO_TRACE_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_LOG_INFO_TRACE_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ulFullAutoStopFlag
 		If true tracing will stop automatically when the files will be full
	ulTraceMask
 		The tracing masks that are currently active
	TraceInfo
 		Trace info structure
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER			Header;
	tOCT_UINT32					ulFullAutoStopFlag;
	tOCTVC1_LOG_TRACE_MASK		ulTraceMask;
	tOCTVC1_MAIN_LOG_TRACE_INFO	TraceInfo;

} tOCTVC1_MAIN_MSG_LOG_INFO_TRACE_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_LOG_START_TRACE_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ulFullAutoStopFlag
		Default:	cOCT_FALSE
 		If cOCT_TRUE tracing will stop automatically when all the files are full
 		If cOCT_FALSE tracing will write continuously (overwriting files in ringbuffer)
	ulTraceMask
		Default:	cOCTVC1_LOG_TRACE_MASK_NONE
	ulFileSize
		Default:	16384
 		The maximum size (in bytes) of each trace file
	ulFileNumber
		Default:	4
 		The maximum number of files for tracing
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCT_BOOL32				ulFullAutoStopFlag;
	tOCTVC1_LOG_TRACE_MASK	ulTraceMask;
	tOCT_UINT32				ulFileSize;
	tOCT_UINT32				ulFileNumber;

} tOCTVC1_MAIN_MSG_LOG_START_TRACE_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_LOG_START_TRACE_RSP

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_MAIN_MSG_LOG_START_TRACE_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_LOG_STOP_TRACE_CMD

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_MAIN_MSG_LOG_STOP_TRACE_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_LOG_STOP_TRACE_RSP

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_MAIN_MSG_LOG_STOP_TRACE_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_LOG_ERASE_TRACE_CMD

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_MAIN_MSG_LOG_ERASE_TRACE_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_LOG_ERASE_TRACE_RSP

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_MAIN_MSG_LOG_ERASE_TRACE_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_LOG_STATS_TRACE_CMD

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_MAIN_MSG_LOG_STATS_TRACE_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_LOG_STATS_TRACE_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ulState
 		The current state of the tracer
	ulFullAutoStopFlag
 		If true tracing will stop automatically when the files will be full
	ulTraceMask
 		The tracing masks that are currently active
	TraceStats
 		Trace stats structure
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER					Header;
	tOCTVC1_MAIN_LOG_TRACE_STATE_ENUM	ulState;
	tOCT_UINT32							ulFullAutoStopFlag;
	tOCTVC1_LOG_TRACE_MASK				ulTraceMask;
	tOCTVC1_MAIN_LOG_TRACE_STATS		TraceStats;

} tOCTVC1_MAIN_MSG_LOG_STATS_TRACE_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_PROCESS_INFO_CPU_USAGE_CMD

 Members:
	Header
 		OCTVC1 Message Header
	hProcess
		Default:	1
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_UINT32			hProcess;

} tOCTVC1_MAIN_MSG_PROCESS_INFO_CPU_USAGE_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_PROCESS_INFO_CPU_USAGE_RSP

 Members:
	Header
 		OCTVC1 Message Header
	hProcess
	ulAlarmThresholdHighPercent
 		Current threshold value configured to monitor High increasing CPU usage.
	ulAlarmThresholdLowPercent
 		Current threshold value configured to monitor Low decreasing CPU usage.
	ulMonitorEnableFlag
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_UINT32			hProcess;
	tOCT_UINT32			ulAlarmThresholdHighPercent;
	tOCT_UINT32			ulAlarmThresholdLowPercent;
	tOCT_BOOL32			ulMonitorEnableFlag;

} tOCTVC1_MAIN_MSG_PROCESS_INFO_CPU_USAGE_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_FILE_OPEN_CMD

 Members:
	Header
 		OCTVC1 Message Header
	szFileName
 		Null-Terminated file name string.
	ulAccessMode
		Default:	cOCTVC1_MAIN_FILE_OPEN_MODE_MASK_READ
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER					Header;
	tOCT_UINT8							szFileName[(cOCTVC1_MAIN_FILE_NAME_MAX_LENGTH+1)];
	tOCTVC1_MAIN_FILE_OPEN_MODE_MASK	ulAccessMode;

} tOCTVC1_MAIN_MSG_FILE_OPEN_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_FILE_OPEN_RSP

 Members:
	Header
 		OCTVC1 Message Header
	hFile
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCTVC1_HANDLE_OBJECT	hFile;

} tOCTVC1_MAIN_MSG_FILE_OPEN_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_FILE_CLOSE_CMD

 Members:
	Header
 		OCTVC1 Message Header
	hFile
		Default:	cOCTVC1_HANDLE_INVALID
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCTVC1_HANDLE_OBJECT	hFile;

} tOCTVC1_MAIN_MSG_FILE_CLOSE_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_FILE_CLOSE_RSP

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_MAIN_MSG_FILE_CLOSE_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_FILE_SYSTEM_DELETE_FILE_CMD

 Members:
	Header
 		OCTVC1 Message Header
	szFileName
 		Null-Terminated file name string.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_UINT8			szFileName[(cOCTVC1_MAIN_FILE_NAME_MAX_LENGTH+1)];

} tOCTVC1_MAIN_MSG_FILE_SYSTEM_DELETE_FILE_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_FILE_SYSTEM_DELETE_FILE_RSP

 Members:
	Header
 		OCTVC1 Message Header
	szFileName
 		Null-Terminated file name string.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_UINT8			szFileName[(cOCTVC1_MAIN_FILE_NAME_MAX_LENGTH+1)];

} tOCTVC1_MAIN_MSG_FILE_SYSTEM_DELETE_FILE_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_FILE_WRITE_CMD

 Members:
	Header
 		OCTVC1 Message Header
	hFile
		Default:	cOCTVC1_HANDLE_INVALID
	ulNumByteToWrite
		Default:	1
	abyData
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCTVC1_HANDLE_OBJECT	hFile;
	tOCT_UINT32				ulNumByteToWrite;
	tOCT_UINT8				abyData[cOCTVC1_MAIN_FILE_MAX_DATA_BYTE_SIZE];

} tOCTVC1_MAIN_MSG_FILE_WRITE_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_FILE_WRITE_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ulNumByteWritten
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_UINT32			ulNumByteWritten;

} tOCTVC1_MAIN_MSG_FILE_WRITE_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_FILE_READ_CMD

 Members:
	Header
 		OCTVC1 Message Header
	hFile
		Default:	cOCTVC1_HANDLE_INVALID
	ulMaxNumByteToRead
		Default:	cOCTVC1_MAIN_FILE_MAX_DATA_BYTE_SIZE
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCTVC1_HANDLE_OBJECT	hFile;
	tOCT_UINT32				ulMaxNumByteToRead;

} tOCTVC1_MAIN_MSG_FILE_READ_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_FILE_READ_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ulNumByteRead
	abyData
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_UINT32			ulNumByteRead;
	tOCT_UINT8			abyData[cOCTVC1_MAIN_FILE_MAX_DATA_BYTE_SIZE];

} tOCTVC1_MAIN_MSG_FILE_READ_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_FILE_INFO_CMD

 Members:
	Header
 		OCTVC1 Message Header
	hFile
		Default:	cOCTVC1_HANDLE_INVALID
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCTVC1_HANDLE_OBJECT	hFile;

} tOCTVC1_MAIN_MSG_FILE_INFO_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_FILE_INFO_RSP

 Members:
	Header
 		OCTVC1 Message Header
	hFile
	szFileName
 		Null-Terminated file name string.
	ulAccessMode
	ulMinAlignBytes
 		Indicates the minimum write size used for proper alignment (in bytes)
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER					Header;
	tOCTVC1_HANDLE_OBJECT				hFile;
	tOCT_UINT8							szFileName[(cOCTVC1_MAIN_FILE_NAME_MAX_LENGTH+1)];
	tOCTVC1_MAIN_FILE_OPEN_MODE_MASK	ulAccessMode;
	tOCT_UINT32							ulMinAlignBytes;

} tOCTVC1_MAIN_MSG_FILE_INFO_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_FILE_LIST_CMD
 		List the cmd that are monitored

 Members:
	Header
 		OCTVC1 Message Header
	ObjectCursor
 		Object cursor
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER					Header;
	tOCTVC1_CURSOR_HANDLE_OBJECT_GET	ObjectCursor;

} tOCTVC1_MAIN_MSG_FILE_LIST_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_FILE_LIST_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ObjectCursor
 		Object cursor
	ObjectList
 		Object List structure.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER					Header;
	tOCTVC1_CURSOR_HANDLE_OBJECT_GET	ObjectCursor;
	tOCTVC1_LIST_HANDLE_OBJECT_GET		ObjectList;

} tOCTVC1_MAIN_MSG_FILE_LIST_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_CMD

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ulMaxFileEntry
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_UINT32			ulMaxFileEntry;

} tOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_FILE_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ObjectGet
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER						Header;
	tOCTVC1_MAIN_FILE_SYSTEM_FILE_CURSOR	ObjectGet;

} tOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_FILE_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_FILE_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ObjectGet
	ulAccessMode
	ulHostOwnerFlag
 		Only Host owner file can be deleted
	ulFileSize
 		Currently used file Size
	ulMaxFileSize
 		Maximum File Size
	ulInstanceNum
 		Number of MAIN_FILE link to that SYSTEM_FILE
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER						Header;
	tOCTVC1_MAIN_FILE_SYSTEM_FILE_CURSOR	ObjectGet;
	tOCTVC1_MAIN_FILE_OPEN_MODE_MASK		ulAccessMode;
	tOCT_BOOL32								ulHostOwnerFlag;
	tOCT_UINT32								ulFileSize;
	tOCT_UINT32								ulMaxFileSize;
	tOCT_UINT32								ulInstanceNum;

} tOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_FILE_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_PROCESS_INFO_CMD

 Members:
	Header
 		OCTVC1 Message Header
	hProcess
		Default:	cOCTVC1_HANDLE_INVALID
 		Process handle identifier. Typically retrieved using the
 		cOCTVC1_MAIN_MSG_TARGET_INFO_CID command.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_UINT32			hProcess;

} tOCTVC1_MAIN_MSG_PROCESS_INFO_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_PROCESS_INFO_RSP

 Members:
	Header
 		OCTVC1 Message Header
	hProcess
	szName
 		Process Name.
	szProcessImageName
 		Process file name.
	ulType
 		Process Type.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER			Header;
	tOCT_UINT32					hProcess;
	tOCT_UINT8					szName[(cOCTVC1_HANDLE_OBJECT32_NAME_MAX_LENGTH+1)];/* NOSWAPMAC */
	tOCT_UINT8					szProcessImageName[(cOCTVC1_PROCESS_IMAGE_NAME_MAX_LENGTH+1)];/* NOSWAPMAC */
	tOCTVC1_PROCESS_TYPE_ENUM	ulType;

} tOCTVC1_MAIN_MSG_PROCESS_INFO_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_PROCESS_LIST_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ObjectCursor
 		Object cursor
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER					Header;
	tOCTVC1_CURSOR_HANDLE_OBJECT_GET	ObjectCursor;

} tOCTVC1_MAIN_MSG_PROCESS_LIST_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_PROCESS_LIST_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ObjectCursor
 		Object cursor
	ObjectNameList
 		Object32 named list.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER					Header;
	tOCTVC1_CURSOR_HANDLE_OBJECT_GET	ObjectCursor;
	tOCTVC1_LIST_NAME_OBJECT32_GET		ObjectNameList;

} tOCTVC1_MAIN_MSG_PROCESS_LIST_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_PROCESS_MONITOR_CPU_USAGE_CMD

 Members:
	Header
 		OCTVC1 Message Header
	hProcess
		Default:	1
	ulAlarmThresholdHighPercent
		Range:		[0..100]
		Default:	98
	ulAlarmThresholdLowPercent
		Range:		[0..100]
		Default:	90
	ulMonitorEnableFlag
		Default:	cOCTVC1_DO_NOT_MODIFY
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_UINT32			hProcess;
	tOCT_UINT32			ulAlarmThresholdHighPercent;
	tOCT_UINT32			ulAlarmThresholdLowPercent;
	tOCT_BOOL32			ulMonitorEnableFlag;

} tOCTVC1_MAIN_MSG_PROCESS_MONITOR_CPU_USAGE_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_PROCESS_MONITOR_CPU_USAGE_RSP

 Members:
	Header
 		OCTVC1 Message Header
	hProcess
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_UINT32			hProcess;

} tOCTVC1_MAIN_MSG_PROCESS_MONITOR_CPU_USAGE_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_PROCESS_STATS_CPU_USAGE_CMD

 Members:
	Header
 		OCTVC1 Message Header
	hProcess
		Default:	1
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_UINT32			hProcess;

} tOCTVC1_MAIN_MSG_PROCESS_STATS_CPU_USAGE_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_PROCESS_STATS_CPU_USAGE_RSP

 Members:
	Header
 		OCTVC1 Message Header
	hProcess
	ulProcessCpuUsagePercent
 		Current Process CPU usage value, expressed as a percentage.
	ulProcessCpuUsageMinPercent
 		Minimal Process CPU usage value, since last
 		cOCTVC1_MAIN_MSG_PROCESS_INFO_CPU_USAGE_CID command.
	ulProcessCpuUsageMaxPercent
 		Minimal Process CPU usage value, since last
 		cOCTVC1_MAIN_MSG_PROCESS_INFO_CPU_USAGE_CID command.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_UINT32			hProcess;
	tOCT_UINT32			ulProcessCpuUsagePercent;
	tOCT_UINT32			ulProcessCpuUsageMinPercent;
	tOCT_UINT32			ulProcessCpuUsageMaxPercent;

} tOCTVC1_MAIN_MSG_PROCESS_STATS_CPU_USAGE_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_API_SYSTEM_LIST_SESSION_CMD
 		List the cmd that are monitored

 Members:
	Header
 		OCTVC1 Message Header
	IndexGet
 		Object cursor
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER			Header;
	tOCTVC1_CURSOR_INDEX_GET	IndexGet;

} tOCTVC1_MAIN_MSG_API_SYSTEM_LIST_SESSION_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_API_SYSTEM_LIST_SESSION_RSP

 Members:
	Header
 		OCTVC1 Message Header
	IndexGet
 		Object cursor
	IndexList
 		Object name list.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER			Header;
	tOCTVC1_CURSOR_INDEX_GET	IndexGet;
	tOCTVC1_LIST_INDEX_GET		IndexList;

} tOCTVC1_MAIN_MSG_API_SYSTEM_LIST_SESSION_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ulSessionIndex
		Default:	cOCTVC1_API_SESSION_INDEX_CURRENT_TRANSPORT
 		Session index
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCTVC1_INDEX		ulSessionIndex;

} tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ulSessionIndex
 		Session index
	SessionInfo
 		Session Info
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER			Header;
	tOCTVC1_INDEX				ulSessionIndex;
	tOCTVC1_API_SESSION_INFO	SessionInfo;

} tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_EVT_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ulSessionIndex
		Default:	cOCTVC1_API_SESSION_INDEX_CURRENT_TRANSPORT
 		Session index
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCTVC1_INDEX		ulSessionIndex;

} tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_EVT_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_EVT_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ulSessionIndex
 		Session index
	EvtInfo
 		Session event Info
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER				Header;
	tOCTVC1_INDEX					ulSessionIndex;
	tOCTVC1_API_SESSION_EVT_INFO	EvtInfo;

} tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_EVT_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_EVT_CMD
 		NOTE: This command will force overwrite the selected session's event settings
 		ex. Forcing events enabled means this session will receive any kind of event
 		sent
 		ex. Forcing events disabled means this session will NOT receive any kind of
 		event anymore
 		NOTE: In most cases, this command is not necessary. Activating a functionality
 		that
 		uses events should enable events automatically.

 Members:
	Header
 		OCTVC1 Message Header
	ulSessionIndex
		Default:	cOCTVC1_API_SESSION_INDEX_CURRENT_TRANSPORT
 		Session index
	ulEvtActiveFlag
		Default:	cOCTVC1_DO_NOT_MODIFY
 		Event activate flag
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCTVC1_INDEX		ulSessionIndex;
	tOCT_BOOL32			ulEvtActiveFlag;

} tOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_EVT_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_EVT_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ulSessionIndex
 		Session index
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCTVC1_INDEX		ulSessionIndex;

} tOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_EVT_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_HEARTBEAT_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ulSessionIndex
		Default:	cOCTVC1_API_SESSION_INDEX_CURRENT_TRANSPORT
 		Session index
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCTVC1_INDEX		ulSessionIndex;

} tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_HEARTBEAT_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_HEARTBEAT_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ulSessionIndex
 		Session index
	Config
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER							Header;
	tOCTVC1_INDEX								ulSessionIndex;
	tOCTVC1_MAIN_API_SESSION_HEARTBEAT_CONFIG	Config;

} tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_HEARTBEAT_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_API_SYSTEM_STATS_SESSION_HEARTBEAT_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ulSessionIndex
		Default:	cOCTVC1_API_SESSION_INDEX_CURRENT_TRANSPORT
 		Session index
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCTVC1_INDEX		ulSessionIndex;

} tOCTVC1_MAIN_MSG_API_SYSTEM_STATS_SESSION_HEARTBEAT_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_API_SYSTEM_STATS_SESSION_HEARTBEAT_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ulSessionIndex
 		Session index
	Stats
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER							Header;
	tOCTVC1_INDEX								ulSessionIndex;
	tOCTVC1_MAIN_API_SESSION_HEARTBEAT_STATS	Stats;

} tOCTVC1_MAIN_MSG_API_SYSTEM_STATS_SESSION_HEARTBEAT_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_API_SYSTEM_START_SESSION_HEARTBEAT_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ulSessionIndex
		Default:	cOCTVC1_API_SESSION_INDEX_CURRENT_TRANSPORT
 		Session index
	Config
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER							Header;
	tOCTVC1_INDEX								ulSessionIndex;
	tOCTVC1_MAIN_API_SESSION_HEARTBEAT_CONFIG	Config;

} tOCTVC1_MAIN_MSG_API_SYSTEM_START_SESSION_HEARTBEAT_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_API_SYSTEM_START_SESSION_HEARTBEAT_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ulSessionIndex
 		Session index
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCTVC1_INDEX		ulSessionIndex;

} tOCTVC1_MAIN_MSG_API_SYSTEM_START_SESSION_HEARTBEAT_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_API_SYSTEM_STOP_SESSION_HEARTBEAT_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ulSessionIndex
		Default:	cOCTVC1_API_SESSION_INDEX_CURRENT_TRANSPORT
 		Session index
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCTVC1_INDEX		ulSessionIndex;

} tOCTVC1_MAIN_MSG_API_SYSTEM_STOP_SESSION_HEARTBEAT_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_API_SYSTEM_STOP_SESSION_HEARTBEAT_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ulSessionIndex
 		Session index
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCTVC1_INDEX		ulSessionIndex;

} tOCTVC1_MAIN_MSG_API_SYSTEM_STOP_SESSION_HEARTBEAT_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_HEARTBEAT_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ulSessionIndex
		Default:	cOCTVC1_API_SESSION_INDEX_CURRENT_TRANSPORT
 		Session index
	Config
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER							Header;
	tOCTVC1_INDEX								ulSessionIndex;
	tOCTVC1_MAIN_API_SESSION_HEARTBEAT_CONFIG	Config;

} tOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_HEARTBEAT_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_HEARTBEAT_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ulSessionIndex
 		Session index
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCTVC1_INDEX		ulSessionIndex;

} tOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_HEARTBEAT_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_APPLICATION_START_CMD
 		This command starts the application.

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_MAIN_MSG_APPLICATION_START_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_APPLICATION_START_RSP

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_MAIN_MSG_APPLICATION_START_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_APPLICATION_STOP_CMD
 		This command stops the application.

 Members:
	Header
 		OCTVC1 Message Header
	ulQuit
 		Whether the app should quit after stopping. If set to cOCT_TRUE,
 		the app will quit after stopping.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_BOOL32			ulQuit;

} tOCTVC1_MAIN_MSG_APPLICATION_STOP_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_APPLICATION_STOP_RSP

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_MAIN_MSG_APPLICATION_STOP_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_APPLICATION_INFO_CMD
 		This command retrieves the application configuration parameters.

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_MAIN_MSG_APPLICATION_INFO_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_APPLICATION_INFO_RSP

 Members:
	Header
 		OCTVC1 Message Header
	szName
 		Application name
	szDescription
 		Application description
	szVersion
 		Application Version
	abyInfo
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_UINT8			szName[(cOCTVC1_MAIN_APPLICATION_MAX_NAME_LENGTH+1)];
	tOCT_UINT8			szDescription[(cOCTVC1_MAIN_APPLICATION_MAX_DESCRIPTION_LENGTH+1)];
	tOCT_UINT8			szVersion[(cOCTVC1_MAIN_APPLICATION_MAX_VERSION_LENGTH+1)];
	tOCT_UINT8			abyInfo[cOCTVC1_MAIN_APPLICATION_MAX_INFO_BYTE_SIZE];

} tOCTVC1_MAIN_MSG_APPLICATION_INFO_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_APPLICATION_INFO_SYSTEM_CMD
 		This command retrieves the system configuration parameters.

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_MAIN_MSG_APPLICATION_INFO_SYSTEM_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_APPLICATION_INFO_SYSTEM_RSP

 Members:
	Header
 		OCTVC1 Message Header
	szPlatform
 		System platform
	szVersion
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_UINT8			szPlatform[(cOCTVC1_MAIN_APPLICATION_SYSTEM_MAX_PLATFORM_LENGTH+1)];
	tOCT_UINT8			szVersion[cOCTVC1_MAIN_APPLICATION_SYSTEM_MAX_VERSION_LENGTH];

} tOCTVC1_MAIN_MSG_APPLICATION_INFO_SYSTEM_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_APPLICATION_LIST_MODULE_CMD
 		List the cmd that are monitored

 Members:
	Header
 		OCTVC1 Message Header
	ObjectCursor
 		Object cursor
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER					Header;
	tOCTVC1_CURSOR_HANDLE_OBJECT_GET	ObjectCursor;

} tOCTVC1_MAIN_MSG_APPLICATION_LIST_MODULE_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_APPLICATION_LIST_MODULE_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ObjectCursor
 		Object cursor
	ObjectNameList
 		Object List structure.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER					Header;
	tOCTVC1_CURSOR_HANDLE_OBJECT_GET	ObjectCursor;
	tOCTVC1_LIST_NAME_OBJECT32_GET		ObjectNameList;

} tOCTVC1_MAIN_MSG_APPLICATION_LIST_MODULE_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_APPLICATION_INFO_MODULE_CMD

 Members:
	Header
 		OCTVC1 Message Header
	hModule
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCTVC1_HANDLE_OBJECT	hModule;

} tOCTVC1_MAIN_MSG_APPLICATION_INFO_MODULE_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_APPLICATION_INFO_MODULE_RSP

 Members:
	Header
 		OCTVC1 Message Header
	hModule
	szName
 		Module Name.
	Info
 		Module Info
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER						Header;
	tOCTVC1_HANDLE_OBJECT					hModule;
	tOCT_UINT8								szName[(cOCTVC1_HANDLE_OBJECT32_NAME_MAX_LENGTH+1)];/* NOSWAPMAC */
	tOCTVC1_MAIN_APPLICATION_MODULE_INFO	Info;

} tOCTVC1_MAIN_MSG_APPLICATION_INFO_MODULE_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_APPLICATION_STATS_MODULE_CMD

 Members:
	Header
 		OCTVC1 Message Header
	hModule
	ulResetStatsFlag
		Default:	cOCT_FALSE
 		Statistics counters will be reset to zero after the current values are returned.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCTVC1_HANDLE_OBJECT	hModule;
	tOCT_BOOL32				ulResetStatsFlag;

} tOCTVC1_MAIN_MSG_APPLICATION_STATS_MODULE_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_APPLICATION_STATS_MODULE_RSP

 Members:
	Header
 		OCTVC1 Message Header
	hModule
	Stats
 		Module stats
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER						Header;
	tOCTVC1_HANDLE_OBJECT					hModule;
	tOCTVC1_MAIN_APPLICATION_MODULE_STATS	Stats;

} tOCTVC1_MAIN_MSG_APPLICATION_STATS_MODULE_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_FILE_SYSTEM_ADD_FILE_CMD

 Members:
	Header
 		OCTVC1 Message Header
	szFileName
 		Null-Terminated file name string.
	ulMaxFilesize
 		Maximum file size
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_UINT8			szFileName[(cOCTVC1_MAIN_FILE_NAME_MAX_LENGTH+1)];
	tOCT_UINT32			ulMaxFilesize;

} tOCTVC1_MAIN_MSG_FILE_SYSTEM_ADD_FILE_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_FILE_SYSTEM_ADD_FILE_RSP

 Members:
	Header
 		OCTVC1 Message Header
	szFileName
 		Null-Terminated file name string.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_UINT8			szFileName[(cOCTVC1_MAIN_FILE_NAME_MAX_LENGTH+1)];

} tOCTVC1_MAIN_MSG_FILE_SYSTEM_ADD_FILE_RSP;


/***************  INCLUDE FILES WITH DEPENDENCIES ON THIS FILE  **************/
#include "octvc1_main_evt.h"

#endif /* __OCTVC1_MAIN_API_H__ */
