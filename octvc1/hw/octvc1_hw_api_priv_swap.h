/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
File: octvc1_hw_api_priv_swap.h

Copyright (c) 2018 Octasic Inc. All rights reserved.

Description:
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

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_HW_API_PRIV_SWAP_H__
#define __OCTVC1_HW_API_PRIV_SWAP_H__

#ifdef __cplusplus
extern "C" {
#endif

/*****************************  INCLUDE FILES  *******************************/
#include "../octvc1_priv_swap_hdrs.h"
#include "octvc1_hw_api_priv.h"

/*********************************  MACROS  **********************************/

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CMD_SWAP( _f_pParms ){ 	tOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CMD * pOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CMD = (_f_pParms); SWAP_UNUSED(pOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CMD)\
	{ mOCTVC1_MSG_HEADER_SWAP( &((tOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CMD *)pOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CMD)->Header ); }  \
	((tOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CMD *)pOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CMD)->ulPortIndex = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CMD *)pOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CMD)->ulPortIndex); \
	((tOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CMD *)pOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CMD)->ulPassword = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CMD *)pOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CMD)->ulPassword); \
}
#else
#define mOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CMD_SWAP( pOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CMD )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_RSP_SWAP( _f_pParms ){ 	tOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_RSP * pOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_RSP = (_f_pParms); SWAP_UNUSED(pOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_RSP)\
	{ mOCTVC1_MSG_HEADER_SWAP( &((tOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_RSP *)pOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_RSP)->Header ); }  \
	((tOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_RSP *)pOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_RSP)->ulPortIndex = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_RSP *)pOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_RSP)->ulPortIndex); \
}
#else
#define mOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_RSP_SWAP( pOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_RSP )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD_SWAP( _f_pParms ){ 	tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD * pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD = (_f_pParms); SWAP_UNUSED(pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD)\
	{ mOCTVC1_MSG_HEADER_SWAP( &((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD)->Header ); }  \
	{ mOCTVC1_HW_CLOCK_SYNC_MGR_SOURCE_ENUM_SWAP( &((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD)->ulClkSourceRef ); }  \
	((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD)->ulDacInitValue = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD)->ulDacInitValue); \
	((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD)->ulSyncWindowSize = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD)->ulSyncWindowSize); \
	((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD)->lSyncThreshold = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD)->lSyncThreshold); \
	((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD)->ulFrequencyCorrectionFlag = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD)->ulFrequencyCorrectionFlag); \
	((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD)->ulMaxDriftDurationUs = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD)->ulMaxDriftDurationUs); \
}
#else
#define mOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD_SWAP( pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_RSP_SWAP( _f_pParms ){ 	tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_RSP * pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_RSP = (_f_pParms); SWAP_UNUSED(pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_RSP)\
	{ mOCTVC1_MSG_HEADER_SWAP( &((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_RSP *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_RSP)->Header ); }  \
}
#else
#define mOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_RSP_SWAP( pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_RSP )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_CMD_SWAP( _f_pParms ){ 	tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_CMD * pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_CMD = (_f_pParms); SWAP_UNUSED(pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_CMD)\
	{ mOCTVC1_MSG_HEADER_SWAP( &((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_CMD *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_CMD)->Header ); }  \
}
#else
#define mOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_CMD_SWAP( pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_CMD )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_RSP_SWAP( _f_pParms ){ 	tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_RSP * pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_RSP = (_f_pParms); SWAP_UNUSED(pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_RSP)\
	{ mOCTVC1_MSG_HEADER_SWAP( &((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_RSP *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_RSP)->Header ); }  \
}
#else
#define mOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_RSP_SWAP( pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_RSP )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_CMD_SWAP( _f_pParms ){ 	tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_CMD * pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_CMD = (_f_pParms); SWAP_UNUSED(pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_CMD)\
	{ mOCTVC1_MSG_HEADER_SWAP( &((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_CMD *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_CMD)->Header ); }  \
	{ mOCTVC1_HW_CLOCK_SYNC_MGR_STATE_ENUM_SWAP( &((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_CMD *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_CMD)->ulState ); }  \
	{ mOCTVC1_HW_CLOCK_SYNC_MGR_DAC_STATE_ENUM_SWAP( &((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_CMD *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_CMD)->ulDacState ); }  \
}
#else
#define mOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_CMD_SWAP( pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_CMD )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_RSP_SWAP( _f_pParms ){ 	tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_RSP * pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_RSP = (_f_pParms); SWAP_UNUSED(pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_RSP)\
	{ mOCTVC1_MSG_HEADER_SWAP( &((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_RSP *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_RSP)->Header ); }  \
}
#else
#define mOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_RSP_SWAP( pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_RSP )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_CMD_SWAP( _f_pParms ){ 	tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_CMD * pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_CMD = (_f_pParms); SWAP_UNUSED(pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_CMD)\
	{ mOCTVC1_MSG_HEADER_SWAP( &((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_CMD *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_CMD)->Header ); }  \
	((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_CMD *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_CMD)->ulResetStatsFlag = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_CMD *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_CMD)->ulResetStatsFlag); \
}
#else
#define mOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_CMD_SWAP( pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_CMD )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP_SWAP( _f_pParms ){ 	tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP * pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP = (_f_pParms); SWAP_UNUSED(pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP)\
	{ mOCTVC1_MSG_HEADER_SWAP( &((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP)->Header ); }  \
	{ mOCTVC1_HW_CLOCK_SYNC_MGR_STATE_ENUM_SWAP( &((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP)->ulState ); }  \
	((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP)->ulAutoSelectFlag = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP)->ulAutoSelectFlag); \
	((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP)->lClockError = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP)->lClockError); \
	((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP)->lLastMeasuredError = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP)->lLastMeasuredError); \
	((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP)->lDroppedCycles = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP)->lDroppedCycles); \
	((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP)->ulPllFreqHz = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP)->ulPllFreqHz); \
	((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP)->ulPllFractionalFreqHz = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP)->ulPllFractionalFreqHz); \
	((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP)->ulSlipCnt = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP)->ulSlipCnt); \
	((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP)->ulSyncLossCnt = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP)->ulSyncLossCnt); \
	{ mOCTVC1_HW_CLOCK_SYNC_MGR_DAC_STATE_ENUM_SWAP( &((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP)->ulDacState ); }  \
	((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP)->ulDacValue = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP)->ulDacValue); \
	{ mOCTVC1_USER_ID_PROCESS_ENUM_SWAP( &((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP)->ulOwnerProcessUid ); }  \
	((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP)->ulFrequencyCorrectionFlag = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP)->ulFrequencyCorrectionFlag); \
	((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP)->ulDriftElapseTimeUs = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP)->ulDriftElapseTimeUs); \
}
#else
#define mOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP_SWAP( pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#ifdef __cplusplus
}

#endif

#endif /* __OCTVC1_HW_API_PRIV_SWAP_H__ */
