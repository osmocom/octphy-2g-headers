/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: octvc1_id2string.h

Copyright (c) 2016 Octasic Inc. All rights reserved.

Description:

This file contains the id2string implementation for package OCTVC1

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.06.01-B981 (2016/06/10)

$Revision:  $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/


#ifndef __OCTVC1_ID2STRING__
#define __OCTVC1_ID2STRING__

#include "../octdev_types.h"
/* -------------------------------------------------------------------------------------
	OCTVC1_ID2STRING
   -------------------------------------------------------------------------------------*/
#define mOCTVC1_ID2STRING( _f_ulId  ) \
	octvc1_id2string( _f_ulId )

#ifndef OCTVC1_ID2STRING_DECLARE
extern const char * octvc1_id2string( tOCT_UINT32 f_ulId );
#endif 


#ifdef OCTVC1_ID2STRING_DECLARE
#include <stdio.h>
#include "main/octvc1_main_id.h"
#include "hw/octvc1_hw_id.h"
#include "irsc/octvc1_irsc_id.h"
#include "gsm/octvc1_gsm_id.h"


/* -------------------------------------------------------------------------------------
	octvc1_id2string
   -------------------------------------------------------------------------------------*/
const char * octvc1_id2string( tOCT_UINT32 f_ulId )
{
	static char g_szUnknownoctvc1_id2string[32];
	switch( f_ulId & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET ))
	{
		/* OCTVC1_MAIN */
		case ( cOCTVC1_MAIN_MSG_TARGET_RESET_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_TARGET_RESET_CID";
		case ( cOCTVC1_MAIN_MSG_TARGET_INFO_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_TARGET_INFO_CID";
		case ( cOCTVC1_MAIN_MSG_LOG_ERASE_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_LOG_ERASE_CID";
		case ( cOCTVC1_MAIN_MSG_LOG_INFO_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_LOG_INFO_CID";
		case ( cOCTVC1_MAIN_MSG_LOG_STATS_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_LOG_STATS_CID";
		case ( cOCTVC1_MAIN_MSG_LOG_INFO_TRACE_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_LOG_INFO_TRACE_CID";
		case ( cOCTVC1_MAIN_MSG_LOG_START_TRACE_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_LOG_START_TRACE_CID";
		case ( cOCTVC1_MAIN_MSG_LOG_STOP_TRACE_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_LOG_STOP_TRACE_CID";
		case ( cOCTVC1_MAIN_MSG_LOG_ERASE_TRACE_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_LOG_ERASE_TRACE_CID";
		case ( cOCTVC1_MAIN_MSG_LOG_STATS_TRACE_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_LOG_STATS_TRACE_CID";
		case ( cOCTVC1_MAIN_MSG_PROCESS_INFO_CPU_USAGE_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_PROCESS_INFO_CPU_USAGE_CID";
		case ( cOCTVC1_MAIN_MSG_FILE_OPEN_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_FILE_OPEN_CID";
		case ( cOCTVC1_MAIN_MSG_FILE_CLOSE_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_FILE_CLOSE_CID";
		case ( cOCTVC1_MAIN_MSG_FILE_SYSTEM_REMOVE_FILE_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_FILE_SYSTEM_REMOVE_FILE_CID";
		case ( cOCTVC1_MAIN_MSG_FILE_WRITE_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_FILE_WRITE_CID";
		case ( cOCTVC1_MAIN_MSG_FILE_READ_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_FILE_READ_CID";
		case ( cOCTVC1_MAIN_MSG_FILE_INFO_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_FILE_INFO_CID";
		case ( cOCTVC1_MAIN_MSG_FILE_LIST_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_FILE_LIST_CID";
		case ( cOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_CID";
		case ( cOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_FILE_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_FILE_CID";
		case ( cOCTVC1_MAIN_MSG_PROCESS_INFO_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_PROCESS_INFO_CID";
		case ( cOCTVC1_MAIN_MSG_PROCESS_LIST_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_PROCESS_LIST_CID";
		case ( cOCTVC1_MAIN_MSG_PROCESS_MONITOR_CPU_USAGE_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_PROCESS_MONITOR_CPU_USAGE_CID";
		case ( cOCTVC1_MAIN_MSG_PROCESS_STATS_CPU_USAGE_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_PROCESS_STATS_CPU_USAGE_CID";
		case ( cOCTVC1_MAIN_MSG_API_SYSTEM_LIST_SESSION_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_API_SYSTEM_LIST_SESSION_CID";
		case ( cOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_CID";
		case ( cOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_EVT_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_EVT_CID";
		case ( cOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_EVT_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_EVT_CID";
		case ( cOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_HEARTBEAT_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_HEARTBEAT_CID";
		case ( cOCTVC1_MAIN_MSG_API_SYSTEM_STATS_SESSION_HEARTBEAT_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_API_SYSTEM_STATS_SESSION_HEARTBEAT_CID";
		case ( cOCTVC1_MAIN_MSG_API_SYSTEM_START_SESSION_HEARTBEAT_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_API_SYSTEM_START_SESSION_HEARTBEAT_CID";
		case ( cOCTVC1_MAIN_MSG_API_SYSTEM_STOP_SESSION_HEARTBEAT_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_API_SYSTEM_STOP_SESSION_HEARTBEAT_CID";
		case ( cOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_HEARTBEAT_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_HEARTBEAT_CID";
		case ( cOCTVC1_MAIN_MSG_APPLICATION_STOP_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_APPLICATION_STOP_CID";
		case ( cOCTVC1_MAIN_MSG_APPLICATION_INFO_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_APPLICATION_INFO_CID";
		case ( cOCTVC1_MAIN_MSG_APPLICATION_INFO_SYSTEM_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_APPLICATION_INFO_SYSTEM_CID";
		case ( cOCTVC1_MAIN_MSG_APPLICATION_LIST_MODULE_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_APPLICATION_LIST_MODULE_CID";
		case ( cOCTVC1_MAIN_MSG_APPLICATION_INFO_MODULE_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_APPLICATION_INFO_MODULE_CID";
		case ( cOCTVC1_MAIN_MSG_APPLICATION_STATS_MODULE_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_APPLICATION_STATS_MODULE_CID";
		case ( cOCTVC1_MAIN_MSG_FILE_SYSTEM_ADD_FILE_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_FILE_SYSTEM_ADD_FILE_CID";
		case ( cOCTVC1_MAIN_MSG_LOG_INFO_STREAM_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_LOG_INFO_STREAM_CID";
		case ( cOCTVC1_MAIN_MSG_LOG_START_STREAM_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_LOG_START_STREAM_CID";
		case ( cOCTVC1_MAIN_MSG_LOG_STOP_STREAM_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_LOG_STOP_STREAM_CID";
		case ( cOCTVC1_MAIN_MSG_APPLICATION_START_MODULE_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_APPLICATION_START_MODULE_CID";
		case ( cOCTVC1_MAIN_MSG_APPLICATION_STOP_MODULE_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_APPLICATION_STOP_MODULE_CID";
		case (cOCTVC1_MAIN_MSG_PROCESS_DUMP_EID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_PROCESS_DUMP_EID";
		case (cOCTVC1_MAIN_MSG_API_SYSTEM_SESSION_HEARTBEAT_EID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_API_SYSTEM_SESSION_HEARTBEAT_EID";
		case (cOCTVC1_MAIN_MSG_PROCESS_CPU_USAGE_REPORT_EID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_PROCESS_CPU_USAGE_REPORT_EID";
		case (cOCTVC1_MAIN_MSG_APPLICATION_STATE_CHANGE_EID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_APPLICATION_STATE_CHANGE_EID";
		case (cOCTVC1_MAIN_MSG_PROCESS_STATE_CHANGE_EID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_PROCESS_STATE_CHANGE_EID";
		/* OCTVC1_HW */
		case ( cOCTVC1_HW_MSG_PCB_INFO_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_HW_MSG_PCB_INFO_CID";
		case ( cOCTVC1_HW_MSG_CPU_CORE_STATS_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_HW_MSG_CPU_CORE_STATS_CID";
		case ( cOCTVC1_HW_MSG_CPU_CORE_INFO_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_HW_MSG_CPU_CORE_INFO_CID";
		case ( cOCTVC1_HW_MSG_CPU_CORE_LIST_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_HW_MSG_CPU_CORE_LIST_CID";
		case ( cOCTVC1_HW_MSG_ETH_PORT_INFO_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_HW_MSG_ETH_PORT_INFO_CID";
		case ( cOCTVC1_HW_MSG_ETH_PORT_LIST_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_HW_MSG_ETH_PORT_LIST_CID";
		case ( cOCTVC1_HW_MSG_ETH_PORT_STATS_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_HW_MSG_ETH_PORT_STATS_CID";
		case ( cOCTVC1_HW_MSG_ETH_PORT_MODIFY_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_HW_MSG_ETH_PORT_MODIFY_CID";
		case ( cOCTVC1_HW_MSG_RF_PORT_INFO_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_HW_MSG_RF_PORT_INFO_CID";
		case ( cOCTVC1_HW_MSG_RF_PORT_STATS_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_HW_MSG_RF_PORT_STATS_CID";
		case ( cOCTVC1_HW_MSG_RF_PORT_LIST_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_HW_MSG_RF_PORT_LIST_CID";
		case ( cOCTVC1_HW_MSG_RF_PORT_LIST_ANTENNA_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_HW_MSG_RF_PORT_LIST_ANTENNA_CID";
		case ( cOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_RX_CONFIG_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_RX_CONFIG_CID";
		case ( cOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_TX_CONFIG_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_TX_CONFIG_CID";
		case ( cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_INFO_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_INFO_CID";
		case ( cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_CID";
		case ( cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_INFO_SOURCE_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_INFO_SOURCE_CID";
		case ( cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SOURCE_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SOURCE_CID";
		case (cOCTVC1_HW_MSG_CPU_CORE_EXEC_REPORT_EID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_HW_MSG_CPU_CORE_EXEC_REPORT_EID";
		case (cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATUS_CHANGE_EID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATUS_CHANGE_EID";
		/* OCTVC1_IRSC */
		case ( cOCTVC1_IRSC_MSG_PROCESS_INFO_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_IRSC_MSG_PROCESS_INFO_CID";
		case ( cOCTVC1_IRSC_MSG_PROCESS_STATS_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_IRSC_MSG_PROCESS_STATS_CID";
		case ( cOCTVC1_IRSC_MSG_PROCESS_LIST_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_IRSC_MSG_PROCESS_LIST_CID";
		case ( cOCTVC1_IRSC_MSG_PROCESS_INFO_IPC_PORT_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_IRSC_MSG_PROCESS_INFO_IPC_PORT_CID";
		case ( cOCTVC1_IRSC_MSG_PROCESS_STATS_IPC_PORT_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_IRSC_MSG_PROCESS_STATS_IPC_PORT_CID";
		case ( cOCTVC1_IRSC_MSG_PROCESS_LIST_IPC_PORT_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_IRSC_MSG_PROCESS_LIST_IPC_PORT_CID";
		case ( cOCTVC1_IRSC_MSG_PROCESS_INFO_TASK_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_IRSC_MSG_PROCESS_INFO_TASK_CID";
		case ( cOCTVC1_IRSC_MSG_PROCESS_STATS_TASK_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_IRSC_MSG_PROCESS_STATS_TASK_CID";
		case ( cOCTVC1_IRSC_MSG_PROCESS_LIST_TASK_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_IRSC_MSG_PROCESS_LIST_TASK_CID";
		case ( cOCTVC1_IRSC_MSG_OBJMGR_INFO_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_IRSC_MSG_OBJMGR_INFO_CID";
		case ( cOCTVC1_IRSC_MSG_OBJMGR_STATS_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_IRSC_MSG_OBJMGR_STATS_CID";
		case ( cOCTVC1_IRSC_MSG_OBJMGR_LIST_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_IRSC_MSG_OBJMGR_LIST_CID";
		case ( cOCTVC1_IRSC_MSG_API_SYSTEM_START_MONITORING_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_IRSC_MSG_API_SYSTEM_START_MONITORING_CID";
		case ( cOCTVC1_IRSC_MSG_API_SYSTEM_STOP_MONITORING_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_IRSC_MSG_API_SYSTEM_STOP_MONITORING_CID";
		case ( cOCTVC1_IRSC_MSG_API_SYSTEM_LIST_COMMAND_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_IRSC_MSG_API_SYSTEM_LIST_COMMAND_CID";
		case ( cOCTVC1_IRSC_MSG_API_SYSTEM_STATS_COMMAND_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_IRSC_MSG_API_SYSTEM_STATS_COMMAND_CID";
		case ( cOCTVC1_IRSC_MSG_API_SYSTEM_LIST_SESSION_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_IRSC_MSG_API_SYSTEM_LIST_SESSION_CID";
		case ( cOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_CID";
		case ( cOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_CID";
		case ( cOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_EVT_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_EVT_CID";
		case ( cOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_EVT_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_EVT_CID";
		case ( cOCTVC1_IRSC_MSG_APPLICATION_LIST_TAP_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_IRSC_MSG_APPLICATION_LIST_TAP_CID";
		case ( cOCTVC1_IRSC_MSG_APPLICATION_INFO_TAP_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_IRSC_MSG_APPLICATION_INFO_TAP_CID";
		case ( cOCTVC1_IRSC_MSG_APPLICATION_STATS_TAP_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_IRSC_MSG_APPLICATION_STATS_TAP_CID";
		case ( cOCTVC1_IRSC_MSG_APPLICATION_START_TAP_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_IRSC_MSG_APPLICATION_START_TAP_CID";
		case ( cOCTVC1_IRSC_MSG_APPLICATION_STOP_TAP_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_IRSC_MSG_APPLICATION_STOP_TAP_CID";
		case ( cOCTVC1_IRSC_MSG_ROUTER_INFO_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_IRSC_MSG_ROUTER_INFO_CID";
		case ( cOCTVC1_IRSC_MSG_ROUTER_STATS_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_IRSC_MSG_ROUTER_STATS_CID";
		case (cOCTVC1_IRSC_MSG_PROCESS_DUMP_EID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_IRSC_MSG_PROCESS_DUMP_EID";
		case (cOCTVC1_IRSC_MSG_APPLICATION_TAP_DATA_REQUEST_EID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_IRSC_MSG_APPLICATION_TAP_DATA_REQUEST_EID";
		/* OCTVC1_GSM */
		case ( cOCTVC1_GSM_MSG_TRX_OPEN_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_OPEN_CID";
		case ( cOCTVC1_GSM_MSG_TRX_CLOSE_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_CLOSE_CID";
		case ( cOCTVC1_GSM_MSG_TRX_STATUS_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_STATUS_CID";
		case ( cOCTVC1_GSM_MSG_TRX_INFO_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_INFO_CID";
		case ( cOCTVC1_GSM_MSG_TRX_RESET_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_RESET_CID";
		case ( cOCTVC1_GSM_MSG_TRX_MODIFY_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_MODIFY_CID";
		case ( cOCTVC1_GSM_MSG_TRX_LIST_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_LIST_CID";
		case ( cOCTVC1_GSM_MSG_TRX_CLOSE_ALL_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_CLOSE_ALL_CID";
		case ( cOCTVC1_GSM_MSG_TRX_START_RECORD_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_START_RECORD_CID";
		case ( cOCTVC1_GSM_MSG_TRX_STOP_RECORD_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_STOP_RECORD_CID";
		case ( cOCTVC1_GSM_MSG_TRX_ACTIVATE_LOGICAL_CHANNEL_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_ACTIVATE_LOGICAL_CHANNEL_CID";
		case ( cOCTVC1_GSM_MSG_TRX_DEACTIVATE_LOGICAL_CHANNEL_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_DEACTIVATE_LOGICAL_CHANNEL_CID";
		case ( cOCTVC1_GSM_MSG_TRX_STATUS_LOGICAL_CHANNEL_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_STATUS_LOGICAL_CHANNEL_CID";
		case ( cOCTVC1_GSM_MSG_TRX_INFO_LOGICAL_CHANNEL_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_INFO_LOGICAL_CHANNEL_CID";
		case ( cOCTVC1_GSM_MSG_TRX_LIST_LOGICAL_CHANNEL_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_LIST_LOGICAL_CHANNEL_CID";
		case ( cOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_EMPTY_FRAME_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_EMPTY_FRAME_CID";
		case ( cOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_DATA_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_DATA_CID";
		case ( cOCTVC1_GSM_MSG_TRX_ACTIVATE_PHYSICAL_CHANNEL_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_ACTIVATE_PHYSICAL_CHANNEL_CID";
		case ( cOCTVC1_GSM_MSG_TRX_DEACTIVATE_PHYSICAL_CHANNEL_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_DEACTIVATE_PHYSICAL_CHANNEL_CID";
		case ( cOCTVC1_GSM_MSG_TRX_STATUS_PHYSICAL_CHANNEL_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_STATUS_PHYSICAL_CHANNEL_CID";
		case ( cOCTVC1_GSM_MSG_TRX_RESET_PHYSICAL_CHANNEL_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_RESET_PHYSICAL_CHANNEL_CID";
		case ( cOCTVC1_GSM_MSG_TRX_LIST_PHYSICAL_CHANNEL_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_LIST_PHYSICAL_CHANNEL_CID";
		case ( cOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_CID";
		case ( cOCTVC1_GSM_MSG_TRX_MODIFY_PHYSICAL_CHANNEL_CIPHERING_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_MODIFY_PHYSICAL_CHANNEL_CIPHERING_CID";
		case ( cOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_CIPHERING_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_CIPHERING_CID";
		case ( cOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_MEASUREMENT_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_MEASUREMENT_CID";
		case ( cOCTVC1_GSM_MSG_TRX_INFO_RF_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_INFO_RF_CID";
		case ( cOCTVC1_GSM_MSG_TRX_MODIFY_RF_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_MODIFY_RF_CID";
		case ( cOCTVC1_GSM_MSG_TAP_FILTER_LIST_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TAP_FILTER_LIST_CID";
		case ( cOCTVC1_GSM_MSG_TAP_FILTER_INFO_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TAP_FILTER_INFO_CID";
		case ( cOCTVC1_GSM_MSG_TAP_FILTER_STATS_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TAP_FILTER_STATS_CID";
		case ( cOCTVC1_GSM_MSG_TAP_FILTER_MODIFY_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TAP_FILTER_MODIFY_CID";
		case ( cOCTVC1_GSM_MSG_TRX_START_LOGICAL_CHANNEL_RAW_DATA_INDICATIONS_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_START_LOGICAL_CHANNEL_RAW_DATA_INDICATIONS_CID";
		case ( cOCTVC1_GSM_MSG_TRX_STOP_LOGICAL_CHANNEL_RAW_DATA_INDICATIONS_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_STOP_LOGICAL_CHANNEL_RAW_DATA_INDICATIONS_CID";
		case ( cOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_CMU_LOOPBACK_TEST_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_CMU_LOOPBACK_TEST_CID";
		case ( cOCTVC1_GSM_MSG_TRX_REQUEST_STUBB_LOOPBACK_TEST_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_REQUEST_STUBB_LOOPBACK_TEST_CID";
		case ( cOCTVC1_GSM_MSG_TRX_START_STUBB_LOOPBACK_TEST_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_START_STUBB_LOOPBACK_TEST_CID";
		case ( cOCTVC1_GSM_MSG_TRX_STOP_STUBB_LOOPBACK_TEST_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_STOP_STUBB_LOOPBACK_TEST_CID";
		case ( cOCTVC1_GSM_MSG_TRX_MODIFY_TEST_MODE_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_MODIFY_TEST_MODE_CID";
		case (cOCTVC1_GSM_MSG_TRX_TIME_INDICATION_EID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_TIME_INDICATION_EID";
		case (cOCTVC1_GSM_MSG_TRX_STATUS_CHANGE_EID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_STATUS_CHANGE_EID";
		case (cOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_DATA_INDICATION_EID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_DATA_INDICATION_EID";
		case (cOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_READY_TO_SEND_INDICATION_EID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_READY_TO_SEND_INDICATION_EID";
		case (cOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RACH_INDICATION_EID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RACH_INDICATION_EID";
		case (cOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RAW_DATA_INDICATION_EID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RAW_DATA_INDICATION_EID";

		default:
			break;

	}
	sprintf( g_szUnknownoctvc1_id2string, "0x%.8X", f_ulId ); 
	return g_szUnknownoctvc1_id2string;
}
#endif 

#endif /* __OCTVC1_ID2STRING__ */
