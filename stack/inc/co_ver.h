/*
****************************************************************************************************
* (c) copyright by
*     Embedded Office GmbH & Co. KG       Tel : (07522) 97 00 08-0
*     Friedrich-Ebert-Str. 20/1           Fax : (07522) 97 00 08-99
*     D-88239 Wangen                      Mail: info@embedded-office.de
*                                         Web : http://www.embedded-office.de
*
* All rights reserved. Confidential and Proprietary. Protected by international copyright laws.
* Knowledge of the source code may not be used to write a similar product.
* This file may only be used in accordance with a license and should not be
* redistributed in any way.
****************************************************************************************************
*/
/*!
****************************************************************************************************
* \file     co_ver.h
*
* \brief    CANOPEN IDENTIFICATION DEFINITION
*
*  $Id: //stream_uccanopen/_root/uccanopen/source/co_ver.h#2 $
*
*           This include file defines the symbolic constants and data types for the CANopen
*           version identifivation.
****************************************************************************************************
*/
/*----------------------------------------END OF HEADER-------------------------------------------*/

#ifndef CO_VER_H_
#define CO_VER_H_

#ifdef __cplusplus
extern "C" {
#endif

/*
****************************************************************************************************
*                                             INCLUDES
****************************************************************************************************
*/

#include "co_types.h"

/*
****************************************************************************************************
*                                             DEFINES
****************************************************************************************************
*/

#define CO_VER_MAJOR          3
#define CO_VER_MINOR          3
#define CO_VER_BUILD          0

/*
****************************************************************************************************
*                                        FUNCTION PROTOTYPE
****************************************************************************************************
*/

uint8_t  COVerMajor   (void);
uint8_t  COVerMinor   (void);
uint8_t  COVerBuild   (void);
uint32_t COVerChange  (void);
uint32_t COVersion    (void);

#ifdef __cplusplus
}
#endif

#endif /* ifndef CO_VER_H_ */
