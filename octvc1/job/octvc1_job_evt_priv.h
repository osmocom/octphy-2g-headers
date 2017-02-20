/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_JOB_EVT_PRIV.h
Copyright (c) 2017 Octasic Inc. All rights reserved.

Description: Contains the event definition of the JOB API.

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.07.00-B1314 (2017/01/18)

$Octasic_Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_JOB_EVT_PRIV_H__
#define __OCTVC1_JOB_EVT_PRIV_H__


/*****************************  INCLUDE FILES  *******************************/

#include "octvc1_job_api_priv.h"

/************************  COMMON DEFINITIONS  *******************************/

/*****************************  NOTIFICATIONS  **********************************/
/*-------------------------------------------------------------------------------------
	tOCTVC1_JOB_MSG_RUNNER_UNIT_TEST_END_EVT

 Members:
	Header
 		OCTVC1 Event Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_EVENT_HEADER	Header;

} tOCTVC1_JOB_MSG_RUNNER_UNIT_TEST_END_EVT;


#endif /* __OCTVC1_JOB_EVT_PRIV_H__ */

