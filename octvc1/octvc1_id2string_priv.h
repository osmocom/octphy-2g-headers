/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: octvc1_id2string_priv.h

Copyright (c) 2018 Octasic Inc. All rights reserved.

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.11.00-B1927 (2018/04/27)

$Revision:  $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/


#ifndef __OCTVC1_ID2STRING_PRIV__
#define __OCTVC1_ID2STRING_PRIV__

#include "../octdev_types.h"
#include "octvc1_id2string.h"
/* -------------------------------------------------------------------------------------
	OCTVC1_ID2STRING_PRIV
   -------------------------------------------------------------------------------------*/
#define mOCTVC1_ID2STRING_PRIV( _f_ulId  ) \
	octvc1_id2string_priv( _f_ulId )

#ifndef OCTVC1_ID2STRING_PRIV_DECLARE
extern const char * octvc1_id2string_priv( tOCT_UINT32 f_ulId );
#endif 


#ifdef OCTVC1_ID2STRING_PRIV_DECLARE
#include <stdio.h>
#include "main/octvc1_main_id_priv.h"
#include "job/octvc1_job_id_priv.h"
#include "hw/octvc1_hw_id_priv.h"

#include "octvc1_module.h"
/* -------------------------------------------------------------------------------------
	octvc1_id2string_priv
   -------------------------------------------------------------------------------------*/
const char * octvc1_id2string_priv( tOCT_UINT32 f_ulId )
{
	static char g_szUnknownoctvc1_id2string_priv[32];
	switch( f_ulId & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET ))
	{
		case ( cOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CID";
		case ( cOCTVC1_MAIN_MSG_LICENSING_LIST_INFRACTION_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_LICENSING_LIST_INFRACTION_CID";
		case ( cOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CONFIG_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CONFIG_CID";
		case ( cOCTVC1_MAIN_MSG_LICENSING_MODIFY_INFRACTION_CONFIG_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_LICENSING_MODIFY_INFRACTION_CONFIG_CID";
		case ( cOCTVC1_MAIN_MSG_APPLICATION_CONFIG_INFO_MODULE_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_APPLICATION_CONFIG_INFO_MODULE_CID";
		case ( cOCTVC1_MAIN_MSG_APPLICATION_CONFIG_MODIFY_MODULE_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_APPLICATION_CONFIG_MODIFY_MODULE_CID";
		case (cOCTVC1_MAIN_MSG_LICENSING_INFRACTION_STATE_CHANGE_EID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_MAIN_MSG_LICENSING_INFRACTION_STATE_CHANGE_EID";
		case (cOCTVC1_JOB_MSG_RUNNER_UNIT_TEST_STATE_CHANGE_EID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_JOB_MSG_RUNNER_UNIT_TEST_STATE_CHANGE_EID";
		case ( cOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CID";
		case ( cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CID";
		case ( cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_CID";
		case ( cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_CID";
		case ( cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_CID";

		default:
			break;

	}
	return octvc1_id2string( f_ulId );
}
#endif 

#endif /* __OCTVC1_ID2STRING_PRIV__ */
