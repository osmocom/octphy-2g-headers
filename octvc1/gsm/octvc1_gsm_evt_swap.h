/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

File: octvc1_gsm_evt_swap.h	

Copyright (c) 2015 Octasic Inc. All rights reserved.	

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
	

Release: OCTSDR Software Development Kit OCTSDR_GSM-02.04.00-B662 (2015/10/28)	

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/	
#ifndef __OCTVC1_GSM_EVT_SWAP_H__
#define __OCTVC1_GSM_EVT_SWAP_H__

#ifdef __cplusplus
extern "C" {
#endif

/*****************************  INCLUDE FILES  *******************************/
#include "../octvc1_swap_hdrs.h"
#include "octvc1_gsm_evt.h"

/*********************************  MACROS  **********************************/


#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_DATA_INDICATION_EVT_SWAP( _f_pParms ){ 	tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_DATA_INDICATION_EVT * pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_DATA_INDICATION_EVT = (_f_pParms); SWAP_UNUSED(pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_DATA_INDICATION_EVT)\
	{ mOCTVC1_EVENT_HEADER_SWAP( &((tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_DATA_INDICATION_EVT *)pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_DATA_INDICATION_EVT)->Header ); }  \
	{ mOCTVC1_GSM_TRX_ID_SWAP( &((tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_DATA_INDICATION_EVT *)pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_DATA_INDICATION_EVT)->TrxId ); }  \
	{ mOCTVC1_GSM_LOGICAL_CHANNEL_ID_SWAP( &((tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_DATA_INDICATION_EVT *)pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_DATA_INDICATION_EVT)->LchId ); }  \
	{ mOCTVC1_GSM_MEASUREMENT_INFO_SWAP( &((tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_DATA_INDICATION_EVT *)pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_DATA_INDICATION_EVT)->MeasurementInfo ); }  \
	{ mOCTVC1_GSM_LOGICAL_CHANNEL_DATA_SWAP( &((tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_DATA_INDICATION_EVT *)pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_DATA_INDICATION_EVT)->Data ); }  \
}
#else
#define mOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_DATA_INDICATION_EVT_SWAP( pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_DATA_INDICATION_EVT )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_READY_TO_SEND_INDICATION_EVT_SWAP( _f_pParms ){ 	tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_READY_TO_SEND_INDICATION_EVT * pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_READY_TO_SEND_INDICATION_EVT = (_f_pParms); SWAP_UNUSED(pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_READY_TO_SEND_INDICATION_EVT)\
	{ mOCTVC1_EVENT_HEADER_SWAP( &((tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_READY_TO_SEND_INDICATION_EVT *)pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_READY_TO_SEND_INDICATION_EVT)->Header ); }  \
	{ mOCTVC1_GSM_TRX_ID_SWAP( &((tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_READY_TO_SEND_INDICATION_EVT *)pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_READY_TO_SEND_INDICATION_EVT)->TrxId ); }  \
	{ mOCTVC1_GSM_LOGICAL_CHANNEL_ID_SWAP( &((tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_READY_TO_SEND_INDICATION_EVT *)pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_READY_TO_SEND_INDICATION_EVT)->LchId ); }  \
	((tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_READY_TO_SEND_INDICATION_EVT *)pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_READY_TO_SEND_INDICATION_EVT)->ulFrameNumber = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_READY_TO_SEND_INDICATION_EVT *)pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_READY_TO_SEND_INDICATION_EVT)->ulFrameNumber); \
}
#else
#define mOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_READY_TO_SEND_INDICATION_EVT_SWAP( pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_READY_TO_SEND_INDICATION_EVT )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RACH_INDICATION_EVT_SWAP( _f_pParms ){ 	tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RACH_INDICATION_EVT * pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RACH_INDICATION_EVT = (_f_pParms); SWAP_UNUSED(pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RACH_INDICATION_EVT)\
	{ mOCTVC1_EVENT_HEADER_SWAP( &((tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RACH_INDICATION_EVT *)pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RACH_INDICATION_EVT)->Header ); }  \
	{ mOCTVC1_GSM_TRX_ID_SWAP( &((tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RACH_INDICATION_EVT *)pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RACH_INDICATION_EVT)->TrxId ); }  \
	{ mOCTVC1_GSM_LOGICAL_CHANNEL_ID_SWAP( &((tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RACH_INDICATION_EVT *)pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RACH_INDICATION_EVT)->LchId ); }  \
	{ mOCTVC1_GSM_BURST_TYPE_ENUM_SWAP( &((tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RACH_INDICATION_EVT *)pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RACH_INDICATION_EVT)->ulBurstType ); }  \
	((tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RACH_INDICATION_EVT *)pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RACH_INDICATION_EVT)->ulFrameNumber = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RACH_INDICATION_EVT *)pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RACH_INDICATION_EVT)->ulFrameNumber); \
	{ mOCTVC1_GSM_MEASUREMENT_INFO_SWAP( &((tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RACH_INDICATION_EVT *)pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RACH_INDICATION_EVT)->MeasurementInfo ); }  \
	((tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RACH_INDICATION_EVT *)pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RACH_INDICATION_EVT)->ulMsgLength = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RACH_INDICATION_EVT *)pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RACH_INDICATION_EVT)->ulMsgLength); \
}
#else
#define mOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RACH_INDICATION_EVT_SWAP( pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RACH_INDICATION_EVT )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RAW_DATA_INDICATION_EVT_SWAP( _f_pParms ){ 	tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RAW_DATA_INDICATION_EVT * pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RAW_DATA_INDICATION_EVT = (_f_pParms); SWAP_UNUSED(pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RAW_DATA_INDICATION_EVT)\
	{ mOCTVC1_EVENT_HEADER_SWAP( &((tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RAW_DATA_INDICATION_EVT *)pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RAW_DATA_INDICATION_EVT)->Header ); }  \
	{ mOCTVC1_GSM_TRX_ID_SWAP( &((tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RAW_DATA_INDICATION_EVT *)pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RAW_DATA_INDICATION_EVT)->TrxId ); }  \
	{ mOCTVC1_GSM_LOGICAL_CHANNEL_ID_SWAP( &((tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RAW_DATA_INDICATION_EVT *)pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RAW_DATA_INDICATION_EVT)->LchId ); }  \
	{ mOCTVC1_GSM_RAW_MEASUREMENT_INFO_SWAP( &((tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RAW_DATA_INDICATION_EVT *)pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RAW_DATA_INDICATION_EVT)->MeasurementInfo ); }  \
	{ mOCTVC1_GSM_LOGICAL_CHANNEL_RAW_DATA_SWAP( &((tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RAW_DATA_INDICATION_EVT *)pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RAW_DATA_INDICATION_EVT)->Data ); }  \
}
#else
#define mOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RAW_DATA_INDICATION_EVT_SWAP( pOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RAW_DATA_INDICATION_EVT )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_GSM_MSG_TRX_TIME_INDICATION_EVT_SWAP( _f_pParms ){ 	tOCTVC1_GSM_MSG_TRX_TIME_INDICATION_EVT * pOCTVC1_GSM_MSG_TRX_TIME_INDICATION_EVT = (_f_pParms); SWAP_UNUSED(pOCTVC1_GSM_MSG_TRX_TIME_INDICATION_EVT)\
	{ mOCTVC1_EVENT_HEADER_SWAP( &((tOCTVC1_GSM_MSG_TRX_TIME_INDICATION_EVT *)pOCTVC1_GSM_MSG_TRX_TIME_INDICATION_EVT)->Header ); }  \
	{ mOCTVC1_GSM_TRX_ID_SWAP( &((tOCTVC1_GSM_MSG_TRX_TIME_INDICATION_EVT *)pOCTVC1_GSM_MSG_TRX_TIME_INDICATION_EVT)->TrxId ); }  \
	((tOCTVC1_GSM_MSG_TRX_TIME_INDICATION_EVT *)pOCTVC1_GSM_MSG_TRX_TIME_INDICATION_EVT)->ulFrameNumber = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_GSM_MSG_TRX_TIME_INDICATION_EVT *)pOCTVC1_GSM_MSG_TRX_TIME_INDICATION_EVT)->ulFrameNumber); \
}
#else
#define mOCTVC1_GSM_MSG_TRX_TIME_INDICATION_EVT_SWAP( pOCTVC1_GSM_MSG_TRX_TIME_INDICATION_EVT )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_GSM_MSG_TRX_STATUS_CHANGE_EVT_SWAP( _f_pParms ){ 	tOCTVC1_GSM_MSG_TRX_STATUS_CHANGE_EVT * pOCTVC1_GSM_MSG_TRX_STATUS_CHANGE_EVT = (_f_pParms); SWAP_UNUSED(pOCTVC1_GSM_MSG_TRX_STATUS_CHANGE_EVT)\
	{ mOCTVC1_EVENT_HEADER_SWAP( &((tOCTVC1_GSM_MSG_TRX_STATUS_CHANGE_EVT *)pOCTVC1_GSM_MSG_TRX_STATUS_CHANGE_EVT)->Header ); }  \
	{ mOCTVC1_GSM_TRX_ID_SWAP( &((tOCTVC1_GSM_MSG_TRX_STATUS_CHANGE_EVT *)pOCTVC1_GSM_MSG_TRX_STATUS_CHANGE_EVT)->TrxId ); }  \
	{ mOCTVC1_GSM_TRX_STATUS_ENUM_SWAP( &((tOCTVC1_GSM_MSG_TRX_STATUS_CHANGE_EVT *)pOCTVC1_GSM_MSG_TRX_STATUS_CHANGE_EVT)->ulStatus ); }  \
	((tOCTVC1_GSM_MSG_TRX_STATUS_CHANGE_EVT *)pOCTVC1_GSM_MSG_TRX_STATUS_CHANGE_EVT)->ulFrameNumber = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_GSM_MSG_TRX_STATUS_CHANGE_EVT *)pOCTVC1_GSM_MSG_TRX_STATUS_CHANGE_EVT)->ulFrameNumber); \
}
#else
#define mOCTVC1_GSM_MSG_TRX_STATUS_CHANGE_EVT_SWAP( pOCTVC1_GSM_MSG_TRX_STATUS_CHANGE_EVT )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#ifdef __cplusplus
}

#endif

#endif /* __OCTVC1_GSM_EVT_SWAP_H__ */
