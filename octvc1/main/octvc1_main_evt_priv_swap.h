/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*
File: octvc1_main_evt_priv_swap.h

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

#ifndef __OCTVC1_MAIN_EVT_PRIV_SWAP_H__
#define __OCTVC1_MAIN_EVT_PRIV_SWAP_H__

#ifdef __cplusplus
extern "C" {
#endif

/*****************************  INCLUDE FILES  *******************************/
#include "../octvc1_priv_swap_hdrs.h"
#include "octvc1_main_evt_priv.h"

/*********************************  MACROS  **********************************/

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_MAIN_MSG_LICENSING_INFRACTION_STATE_CHANGE_EVT_SWAP( _f_pParms ){ 	tOCTVC1_MAIN_MSG_LICENSING_INFRACTION_STATE_CHANGE_EVT * pOCTVC1_MAIN_MSG_LICENSING_INFRACTION_STATE_CHANGE_EVT = (_f_pParms); SWAP_UNUSED(pOCTVC1_MAIN_MSG_LICENSING_INFRACTION_STATE_CHANGE_EVT)\
	{ mOCTVC1_EVENT_HEADER_SWAP( &((tOCTVC1_MAIN_MSG_LICENSING_INFRACTION_STATE_CHANGE_EVT *)pOCTVC1_MAIN_MSG_LICENSING_INFRACTION_STATE_CHANGE_EVT)->Header ); }  \
	((tOCTVC1_MAIN_MSG_LICENSING_INFRACTION_STATE_CHANGE_EVT *)pOCTVC1_MAIN_MSG_LICENSING_INFRACTION_STATE_CHANGE_EVT)->hInfraction = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_MAIN_MSG_LICENSING_INFRACTION_STATE_CHANGE_EVT *)pOCTVC1_MAIN_MSG_LICENSING_INFRACTION_STATE_CHANGE_EVT)->hInfraction); \
	{ mOCTVC1_MAIN_LICENSE_INFRACTION_TYPE_ENUM_SWAP( &((tOCTVC1_MAIN_MSG_LICENSING_INFRACTION_STATE_CHANGE_EVT *)pOCTVC1_MAIN_MSG_LICENSING_INFRACTION_STATE_CHANGE_EVT)->ulInfractionType ); }  \
}
#else
#define mOCTVC1_MAIN_MSG_LICENSING_INFRACTION_STATE_CHANGE_EVT_SWAP( pOCTVC1_MAIN_MSG_LICENSING_INFRACTION_STATE_CHANGE_EVT )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#ifdef __cplusplus
}

#endif

#endif /* __OCTVC1_MAIN_EVT_PRIV_SWAP_H__ */
