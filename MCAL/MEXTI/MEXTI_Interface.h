/*
 *   MEXTI_Interface.h
 *
 *  Created on: Mar 7, 2023
 *      Author: user
 */

#ifndef MCAL_MEXTI_MEXTI_INTERFACE_H_
#define MCAL_MEXTI_MEXTI_INTERFACE_H_

void MEXTI0_Init();
void MEXTI1_Init();
void MEXTI2_Init();

void MEXTI_Callback(void(*Loc_PtrToFunc)(void));


#endif /* MCAL_MEXTI_MEXTI_INTERFACE_H_ */
