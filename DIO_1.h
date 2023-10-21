/*
 * DIO_1.h
 *
 *  Created on: Oct 21, 2023
 *      Author: user
 */

#ifndef DIO_H_
#define DIO_H_

#include "std_types.h"
/*******************************************************************************
 *                              Module Data Types                              *
 *******************************************************************************/



typedef union
{
	uint8 Reg;
	struct
	{
		uint8 B0:1;
		uint8 B1:1;
		uint8 B2:1;
		uint8 B3:1;
		uint8 B4:1;
		uint8 B5:1;
		uint8 B6:1;
		uint8 B7:1;
	}Bitfield;
}Reg_Def;

typedef struct
{
	Reg_Def Pin;
	Reg_Def DDR;
	Reg_Def PORT;
}Port_Def;


/*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/

void DIO_voidSetPinDirection(Port_Def* ptr,uint8 Copy_u8PinId,uint8 Copy_u8Direction);

void DIO_voidSetPinValue(Port_Def* ptr,uint8 Copy_u8PinId,uint8 Copy_u8Value);

uint8 DIO_voidGetPinValue(Port_Def* ptr,uint8 Copy_u8PinId);

void DIO_voidSetPortDirection(Port_Def* ptr,uint8 Copy_u8Direction);

void DIO_voidSetPortValue(Port_Def* ptr,uint8 Copy_u8Value);

uint8 DIO_voidGetPortValue(Port_Def* ptr);



#endif /* DIO_H_ */
