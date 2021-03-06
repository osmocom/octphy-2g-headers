/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_RADIO.h

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

$Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_RADIO_H__
#define __OCTVC1_RADIO_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octdev_types.h"


/************************  COMMON DEFINITIONS  *******************************/

/*-------------------------------------------------------------------------------------
 	Radio Standard Identifiers
-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------
	tOCTVC1_RADIO_FREQ_UNIT_ENUM :
-------------------------------------------------------------------------------------*/
#define tOCTVC1_RADIO_FREQ_UNIT_ENUM						tOCT_UINT32

#define cOCTVC1_RADIO_FREQ_UNIT_ENUM_HZ						0		 	/* Frequency unit is in hertz. */
#define cOCTVC1_RADIO_FREQ_UNIT_ENUM_KHZ					1		 	/* Frequency unit is in kilohertz. */
#define cOCTVC1_RADIO_FREQ_UNIT_ENUM_MHZ					2		 	/* Frequency unit is in megahertz. */
#define cOCTVC1_RADIO_FREQ_UNIT_ENUM_GHZ					3		 	/* Frequency unit is in gigahertz. */

/*-------------------------------------------------------------------------------------
 	Radio Standard Identifiers
-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------
	tOCTVC1_RADIO_STANDARD_ENUM :
-------------------------------------------------------------------------------------*/
#define tOCTVC1_RADIO_STANDARD_ENUM							tOCT_UINT32

#define cOCTVC1_RADIO_STANDARD_ENUM_GSM						0		
#define cOCTVC1_RADIO_STANDARD_ENUM_UMTS					1		
#define cOCTVC1_RADIO_STANDARD_ENUM_LTE						2		
#define cOCTVC1_RADIO_STANDARD_ENUM_CDMA2000				3		
#define cOCTVC1_RADIO_STANDARD_ENUM_CUSTOM					4		
#define cOCTVC1_RADIO_STANDARD_ENUM_INVALID					0xCAFEDECA	

/*-------------------------------------------------------------------------------------
 	Radio Standard GSM Frequency Band Identifiers
-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------
	tOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM :
-------------------------------------------------------------------------------------*/
#define tOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM			tOCT_UINT32

#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM_380		0		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM_410		1		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM_450		2		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM_480		3		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM_710		4		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM_750		5		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM_810		6		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM_850		7		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM_E_900		8		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM_P_900		9		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM_R_900		10		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM_DCS_1800	11		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM_PCS_1900	12		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM_LAST		13		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM_INVALID	0xCAFEDECA	

/*-------------------------------------------------------------------------------------
 	Radio Standard UMTS Frequency Band Identifiers
-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------
	tOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM :
-------------------------------------------------------------------------------------*/
#define tOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM			tOCT_UINT32

#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_1		0		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_2		1		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_3		2		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_4		3		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_5		4		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_6		5		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_7		6		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_8		7		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_9		8		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_10		9		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_11		10		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_12		11		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_13		12		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_14		13		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_15		14		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_16		15		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_17		16		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_18		17		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_19		18		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_20		19		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_21		20		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_22		21		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_23		22		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_24		23		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_25		24		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_26		25		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_32		26		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_33		27		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_34		28		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_35		29		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_36		30		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_37		31		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_38		32		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_39		33		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_40		34		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_ADD_2	35		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_ADD_4	36		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_ADD_5	37		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_ADD_6	38		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_ADD_7	39		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_ADD_10	40		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_ADD_12	41		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_ADD_13	42		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_ADD_14	43		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_ADD_19	44		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_ADD_25	45		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_ADD_26	46		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_ADD_32	47		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_LAST		48		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_INVALID	0xCAFEDECA	

/*-------------------------------------------------------------------------------------
 	Radio Standard LTE Frequency Band Identifiers
-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------
	tOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM :
-------------------------------------------------------------------------------------*/
#define tOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM			tOCT_UINT32

#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_1			0		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_2			1		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_3			2		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_4			3		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_5			4		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_6			5		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_7			6		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_8			7		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_9			8		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_10		9		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_11		10		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_12		11		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_13		12		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_14		13		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_15		14		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_16		15		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_17		16		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_18		17		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_19		18		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_20		19		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_21		20		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_22		21		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_23		22		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_24		23		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_25		24		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_26		25		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_27		26		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_28		27		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_29		28		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_30		29		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_31		30		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_32		31		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_33		32		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_34		33		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_35		34		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_36		35		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_37		36		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_38		37		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_39		38		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_40		39		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_41		40		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_42		41		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_43		42		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_44		43		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_45		44		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_46		45		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_47		46		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_48		47		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_50		48		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_51		49		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_65		50		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_66		51		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_67		52		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_68		53		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_69		54		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_70		55		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_71		56		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_72		57		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_74		58		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_75		59		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_76		60		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_252		61		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_255		62		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_LAST		63		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_INVALID	0xCAFEDECA	

/*-------------------------------------------------------------------------------------
 	Radio Standard CDMA2000 Frequency Band Identifiers
-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------
	tOCTVC1_RADIO_STANDARD_FREQ_BAND_CDMA2000_ENUM :
-------------------------------------------------------------------------------------*/
#define tOCTVC1_RADIO_STANDARD_FREQ_BAND_CDMA2000_ENUM			tOCT_UINT32

#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_CDMA2000_ENUM_0		0		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_CDMA2000_ENUM_1		1		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_CDMA2000_ENUM_2		2		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_CDMA2000_ENUM_3		3		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_CDMA2000_ENUM_4		4		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_CDMA2000_ENUM_5		5		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_CDMA2000_ENUM_6		6		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_CDMA2000_ENUM_7		7		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_CDMA2000_ENUM_8		8		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_CDMA2000_ENUM_9		9		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_CDMA2000_ENUM_10		10		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_CDMA2000_ENUM_11		11		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_CDMA2000_ENUM_12		12		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_CDMA2000_ENUM_13		13		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_CDMA2000_ENUM_14		14		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_CDMA2000_ENUM_15		15		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_CDMA2000_ENUM_16		16		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_CDMA2000_ENUM_18		18		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_CDMA2000_ENUM_19		19		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_CDMA2000_ENUM_20		20		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_CDMA2000_ENUM_21		21		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_CDMA2000_ENUM_LAST		22		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_CDMA2000_ENUM_INVALID	0xCAFEDECA	

/*-------------------------------------------------------------------------------------
 	Radio Standard Frequency Band Identifiers
-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------
	tOCTVC1_RADIO_STANDARD_FREQ_BAND_ID

 Members:
	ulStandard
 		Radio standard
	ulBandNumber
		Default:	0
 		Band number value.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_RADIO_STANDARD_ENUM	ulStandard;
	tOCT_UINT32					ulBandNumber;

} tOCTVC1_RADIO_STANDARD_FREQ_BAND_ID;

/*-------------------------------------------------------------------------------------
	tOCTVC1_RADIO_FREQUENCY_VALUE

 Members:
	ulUnit
		Default:	cOCTVC1_RADIO_FREQ_UNIT_ENUM_KHZ
 		Frequency unity: Hz,Kz,Mz
	ulValue
		Default:	0
 		Frequency value.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_RADIO_FREQ_UNIT_ENUM	ulUnit;
	tOCT_UINT32						ulValue;

} tOCTVC1_RADIO_FREQUENCY_VALUE;

/*-------------------------------------------------------------------------------------
 	Radio Configiguration Script Identifiers
-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------
	tOCTVC1_RADIO_CONFIG_SCRIPT_TYPE_ENUM :
-------------------------------------------------------------------------------------*/
#define tOCTVC1_RADIO_CONFIG_SCRIPT_TYPE_ENUM				tOCT_UINT32

#define cOCTVC1_RADIO_CONFIG_SCRIPT_TYPE_ENUM_INVALID		0		
#define cOCTVC1_RADIO_CONFIG_SCRIPT_TYPE_ENUM_TEXT			1		
#define cOCTVC1_RADIO_CONFIG_SCRIPT_TYPE_ENUM_BIN			2		

/*-------------------------------------------------------------------------------------
 	Radio Direction Identifiers
-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------
	tOCTVC1_RADIO_ID_DIRECTION_ENUM :
-------------------------------------------------------------------------------------*/
#define tOCTVC1_RADIO_ID_DIRECTION_ENUM						tOCT_UINT32

#define cOCTVC1_RADIO_ID_DIRECTION_ENUM_INVALID				0		
#define cOCTVC1_RADIO_ID_DIRECTION_ENUM_DOWNLINK			1		
#define cOCTVC1_RADIO_ID_DIRECTION_ENUM_UPLINK				2		

/*-------------------------------------------------------------------------------------
 	Radio Standard Bandwidth Identifiers
-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------
	tOCTVC1_RADIO_STANDARD_BANDWIDTH_ENUM :
-------------------------------------------------------------------------------------*/
#define tOCTVC1_RADIO_STANDARD_BANDWIDTH_ENUM				tOCT_UINT32

#define cOCTVC1_RADIO_STANDARD_BANDWIDTH_ENUM_1P4MHZ		0		
#define cOCTVC1_RADIO_STANDARD_BANDWIDTH_ENUM_3MHZ			1		
#define cOCTVC1_RADIO_STANDARD_BANDWIDTH_ENUM_5MHZ			2		
#define cOCTVC1_RADIO_STANDARD_BANDWIDTH_ENUM_10MHZ			3		
#define cOCTVC1_RADIO_STANDARD_BANDWIDTH_ENUM_15MHZ			4		
#define cOCTVC1_RADIO_STANDARD_BANDWIDTH_ENUM_20MHZ			5		
#define cOCTVC1_RADIO_STANDARD_BANDWIDTH_ENUM_LAST			6		
#define cOCTVC1_RADIO_STANDARD_BANDWIDTH_ENUM_INVALID		0xCAFEDECA	

/*-------------------------------------------------------------------------------------
 	RX Gain control identifier
-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------
	tOCTVC1_RADIO_RX_GAIN_CTRL_MODE_ENUM :
-------------------------------------------------------------------------------------*/
#define tOCTVC1_RADIO_RX_GAIN_CTRL_MODE_ENUM				tOCT_UINT32

#define cOCTVC1_RADIO_RX_GAIN_CTRL_MODE_ENUM_MGC			0		 	/* Manual Gain Control */
#define cOCTVC1_RADIO_RX_GAIN_CTRL_MODE_ENUM_AGC_FAST_ATK	1		 	/* Automatic Gain Control */
#define cOCTVC1_RADIO_RX_GAIN_CTRL_MODE_ENUM_AGC_SLOW_ATK	2		 	/* Automatic Gain Control */


#endif /* __OCTVC1_RADIO_H__ */

