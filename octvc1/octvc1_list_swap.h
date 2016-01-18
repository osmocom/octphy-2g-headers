/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

File: octvc1_list_swap.h	

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
	

Release: OCTSDR Software Development Kit OCTSDR_GSM-02.03.00-B560 (2015/08/07)	

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/	
#ifndef __OCTVC1_LIST_SWAP_H__
#define __OCTVC1_LIST_SWAP_H__

#ifdef __cplusplus
extern "C" {
#endif

/*****************************  INCLUDE FILES  *******************************/
#include "octvc1_swap_hdrs.h"
#include "octvc1_list.h"

/*********************************  MACROS  **********************************/


#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_LIST_HANDLE_OBJECT_GET_SWAP( _f_pParms ){ 	tOCTVC1_LIST_HANDLE_OBJECT_GET * pOCTVC1_LIST_HANDLE_OBJECT_GET = (_f_pParms); SWAP_UNUSED(pOCTVC1_LIST_HANDLE_OBJECT_GET)\
	((tOCTVC1_LIST_HANDLE_OBJECT_GET *)pOCTVC1_LIST_HANDLE_OBJECT_GET)->ulNumHandleObject = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_LIST_HANDLE_OBJECT_GET *)pOCTVC1_LIST_HANDLE_OBJECT_GET)->ulNumHandleObject); \
	{ tOCT_UINT32 iOCTVC1_LIST_HANDLE_OBJECT_GET; \
	for( iOCTVC1_LIST_HANDLE_OBJECT_GET=0; \
		iOCTVC1_LIST_HANDLE_OBJECT_GET<(cOCTVC1_HANDLE_OBJECT_LIST_MAX_ENTRY);iOCTVC1_LIST_HANDLE_OBJECT_GET++ ) \
	((tOCTVC1_LIST_HANDLE_OBJECT_GET *)pOCTVC1_LIST_HANDLE_OBJECT_GET)->aHandleObject[iOCTVC1_LIST_HANDLE_OBJECT_GET] = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_LIST_HANDLE_OBJECT_GET *)pOCTVC1_LIST_HANDLE_OBJECT_GET)->aHandleObject[iOCTVC1_LIST_HANDLE_OBJECT_GET]);}\
}
#else
#define mOCTVC1_LIST_HANDLE_OBJECT_GET_SWAP( pOCTVC1_LIST_HANDLE_OBJECT_GET )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_LIST_NAME_OBJECT32_GET_SWAP( _f_pParms ){ 	tOCTVC1_LIST_NAME_OBJECT32_GET * pOCTVC1_LIST_NAME_OBJECT32_GET = (_f_pParms); SWAP_UNUSED(pOCTVC1_LIST_NAME_OBJECT32_GET)\
	((tOCTVC1_LIST_NAME_OBJECT32_GET *)pOCTVC1_LIST_NAME_OBJECT32_GET)->ulNumObject = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_LIST_NAME_OBJECT32_GET *)pOCTVC1_LIST_NAME_OBJECT32_GET)->ulNumObject); \
	{ tOCT_UINT32 jOCTVC1_LIST_NAME_OBJECT32_GET; \
	for( jOCTVC1_LIST_NAME_OBJECT32_GET=0; \
		jOCTVC1_LIST_NAME_OBJECT32_GET<(cOCTVC1_HANDLE_OBJECT32_NAME_LIST_MAX_ENTRY);jOCTVC1_LIST_NAME_OBJECT32_GET++ ) \
	{ mOCTVC1_OBJECT32_NAME_SWAP( &((tOCTVC1_LIST_NAME_OBJECT32_GET *)pOCTVC1_LIST_NAME_OBJECT32_GET)->aNameObject32[jOCTVC1_LIST_NAME_OBJECT32_GET] ); }} \
}
#else
#define mOCTVC1_LIST_NAME_OBJECT32_GET_SWAP( pOCTVC1_LIST_NAME_OBJECT32_GET )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID_NAME_SWAP( _f_pParms ){ 	tOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID_NAME * pOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID_NAME = (_f_pParms); SWAP_UNUSED(pOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID_NAME)\
	((tOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID_NAME *)pOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID_NAME)->hParent = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID_NAME *)pOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID_NAME)->hParent); \
	((tOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID_NAME *)pOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID_NAME)->ulNumObject = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID_NAME *)pOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID_NAME)->ulNumObject); \
	{ tOCT_UINT32 jOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID_NAME; \
	for( jOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID_NAME=0; \
		jOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID_NAME<(cOCTVC1_HANDLE_OBJECT32_NAME_LIST_MAX_ENTRY);jOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID_NAME++ ) \
	{ mOCTVC1_OBJECT32_NAME_SWAP( &((tOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID_NAME *)pOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID_NAME)->aNameObject32[jOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID_NAME] ); }} \
}
#else
#define mOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID_NAME_SWAP( pOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID_NAME )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID_SWAP( _f_pParms ){ 	tOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID * pOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID = (_f_pParms); SWAP_UNUSED(pOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID)\
	((tOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID *)pOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID)->hParent = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID *)pOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID)->hParent); \
	((tOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID *)pOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID)->ulNumSubObjectId = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID *)pOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID)->ulNumSubObjectId); \
	{ tOCT_UINT32 iOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID; \
	for( iOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID=0; \
		iOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID<(cOCTVC1_HANDLE_OBJECT_LIST_MAX_ENTRY);iOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID++ ) \
	((tOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID *)pOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID)->aSubObjectId[iOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID] = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID *)pOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID)->aSubObjectId[iOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID]);}\
}
#else
#define mOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID_SWAP( pOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_LIST_INDEX_GET_SWAP( _f_pParms ){ 	tOCTVC1_LIST_INDEX_GET * pOCTVC1_LIST_INDEX_GET = (_f_pParms); SWAP_UNUSED(pOCTVC1_LIST_INDEX_GET)\
	((tOCTVC1_LIST_INDEX_GET *)pOCTVC1_LIST_INDEX_GET)->ulNumIndex = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_LIST_INDEX_GET *)pOCTVC1_LIST_INDEX_GET)->ulNumIndex); \
	{ tOCT_UINT32 iOCTVC1_LIST_INDEX_GET; \
	for( iOCTVC1_LIST_INDEX_GET=0; \
		iOCTVC1_LIST_INDEX_GET<(cOCTVC1_HANDLE_OBJECT_LIST_MAX_ENTRY);iOCTVC1_LIST_INDEX_GET++ ) \
	((tOCTVC1_LIST_INDEX_GET *)pOCTVC1_LIST_INDEX_GET)->aIndex[iOCTVC1_LIST_INDEX_GET] = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_LIST_INDEX_GET *)pOCTVC1_LIST_INDEX_GET)->aIndex[iOCTVC1_LIST_INDEX_GET]);}\
}
#else
#define mOCTVC1_LIST_INDEX_GET_SWAP( pOCTVC1_LIST_INDEX_GET )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_LIST_INDEX_GET_SUB_INDEX_SWAP( _f_pParms ){ 	tOCTVC1_LIST_INDEX_GET_SUB_INDEX * pOCTVC1_LIST_INDEX_GET_SUB_INDEX = (_f_pParms); SWAP_UNUSED(pOCTVC1_LIST_INDEX_GET_SUB_INDEX)\
	((tOCTVC1_LIST_INDEX_GET_SUB_INDEX *)pOCTVC1_LIST_INDEX_GET_SUB_INDEX)->ulParentIndex = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_LIST_INDEX_GET_SUB_INDEX *)pOCTVC1_LIST_INDEX_GET_SUB_INDEX)->ulParentIndex); \
	((tOCTVC1_LIST_INDEX_GET_SUB_INDEX *)pOCTVC1_LIST_INDEX_GET_SUB_INDEX)->ulNumIndex = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_LIST_INDEX_GET_SUB_INDEX *)pOCTVC1_LIST_INDEX_GET_SUB_INDEX)->ulNumIndex); \
	{ tOCT_UINT32 iOCTVC1_LIST_INDEX_GET_SUB_INDEX; \
	for( iOCTVC1_LIST_INDEX_GET_SUB_INDEX=0; \
		iOCTVC1_LIST_INDEX_GET_SUB_INDEX<(cOCTVC1_HANDLE_OBJECT_LIST_MAX_ENTRY);iOCTVC1_LIST_INDEX_GET_SUB_INDEX++ ) \
	((tOCTVC1_LIST_INDEX_GET_SUB_INDEX *)pOCTVC1_LIST_INDEX_GET_SUB_INDEX)->aIndex[iOCTVC1_LIST_INDEX_GET_SUB_INDEX] = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_LIST_INDEX_GET_SUB_INDEX *)pOCTVC1_LIST_INDEX_GET_SUB_INDEX)->aIndex[iOCTVC1_LIST_INDEX_GET_SUB_INDEX]);}\
}
#else
#define mOCTVC1_LIST_INDEX_GET_SUB_INDEX_SWAP( pOCTVC1_LIST_INDEX_GET_SUB_INDEX )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#ifdef __cplusplus
}

#endif

#endif /* __OCTVC1_LIST_SWAP_H__ */