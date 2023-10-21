/*
 * driver_7segment.c
 *
 *  Created on: Oct 21, 2023
 *      Author: user
 */


#include "driver_7segment.h"
Port_Def* PORTA = ((Port_Def*)0x39);
Port_Def* PORTB = ((Port_Def*)0x36);
Port_Def* PORTC = ((void*)0x33);
Port_Def* PORTD = ((void*)0x30);


void segment_init()
{
	DIO_voidSetPinDirection(PORTB,0,1);
	DIO_voidSetPinDirection(PORTB,1,1);
	DIO_voidSetPinDirection(PORTB,2,1);
	DIO_voidSetPinDirection(PORTB,4,1);

	DIO_voidSetPinValue(PORTB,0,0);
	DIO_voidSetPinValue(PORTB,1,0);
	DIO_voidSetPinValue(PORTB,2,0);
	DIO_voidSetPinValue(PORTB,4,0);


	DIO_voidSetPinDirection(PORTA,pin3_id,1);
	DIO_voidSetPinValue(PORTA,pin3_id,0);


};


void segment_num(uint8 num)
{
	switch(num)
	{
	case 0:
		DIO_voidSetPinValue(PORTB,0,0);
		DIO_voidSetPinValue(PORTB,1,0);
		DIO_voidSetPinValue(PORTB,2,0);
		DIO_voidSetPinValue(PORTB,4,0);
		break;
	case 1:
		DIO_voidSetPinValue(PORTB,0,1);
		DIO_voidSetPinValue(PORTB,1,0);
		DIO_voidSetPinValue(PORTB,2,0);
		DIO_voidSetPinValue(PORTB,4,0);
		break;
	case 2:
		DIO_voidSetPinValue(PORTB,0,0);
		DIO_voidSetPinValue(PORTB,1,1);
		DIO_voidSetPinValue(PORTB,2,0);
		DIO_voidSetPinValue(PORTB,4,0);
		break;
	case 3:
		DIO_voidSetPinValue(PORTB,0,1);
		DIO_voidSetPinValue(PORTB,1,1);
		DIO_voidSetPinValue(PORTB,2,0);
		DIO_voidSetPinValue(PORTB,4,0);
		break;
	case 4:
		DIO_voidSetPinValue(PORTB,0,0);
		DIO_voidSetPinValue(PORTB,1,0);
		DIO_voidSetPinValue(PORTB,2,1);
		DIO_voidSetPinValue(PORTB,4,0);
		break;
	case 5:
		DIO_voidSetPinValue(PORTB,0,1);
		DIO_voidSetPinValue(PORTB,1,0);
		DIO_voidSetPinValue(PORTB,2,1);
		DIO_voidSetPinValue(PORTB,4,0);
		break;
	case 6:
		DIO_voidSetPinValue(PORTB,0,0);
		DIO_voidSetPinValue(PORTB,1,1);
		DIO_voidSetPinValue(PORTB,2,1);
		DIO_voidSetPinValue(PORTB,4,0);
		break;
	case 7:
		DIO_voidSetPinValue(PORTB,0,1);
		DIO_voidSetPinValue(PORTB,1,1);
		DIO_voidSetPinValue(PORTB,2,1);
		DIO_voidSetPinValue(PORTB,4,0);
		break;
	case 8:
		DIO_voidSetPinValue(PORTB,0,0);
		DIO_voidSetPinValue(PORTB,1,0);
		DIO_voidSetPinValue(PORTB,2,0);
		DIO_voidSetPinValue(PORTB,4,1);
		break;
	case 9:
		DIO_voidSetPinValue(PORTB,0,1);
		DIO_voidSetPinValue(PORTB,1,0);
		DIO_voidSetPinValue(PORTB,2,0);
		DIO_voidSetPinValue(PORTB,4,1);
		break;

	};


}
