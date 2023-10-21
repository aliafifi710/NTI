/*
 * driver_7segment.c
 *
 *  Created on: Oct 21, 2023
 *      Author: user
 */


#include "driver_7segment.h"


Port_Def* PORTA = ((void*)0x39);
Port_Def* PORTB = ((void*)0x36);
Port_Def* PORTC = ((void*)0x33);
Port_Def* PORTD = ((void*)0x30);


void segment_init()
{

	DIO_voidSetPinDirection(PORTB,pin0_id,OUTPUT);
	DIO_voidSetPinDirection(PORTB,pin1_id,OUTPUT);
	DIO_voidSetPinDirection(PORTB,pin2_id,OUTPUT);
	DIO_voidSetPinDirection(PORTB,pin4_id,OUTPUT);

//	DIO_voidSetPinDirection(PORTA,pin6_id,OUTPUT);
//	DIO_voidSetPinValue(PORTA,pin6_id,OUTPUT);



	DIO_voidSetPinDirection(PORTA,pin3_id,OUTPUT);

	DIO_voidSetPinValue(PORTB,pin0_id,INPUT);
	DIO_voidSetPinValue(PORTB,pin1_id,INPUT);
	DIO_voidSetPinValue(PORTB,pin2_id,INPUT);
	DIO_voidSetPinValue(PORTB,pin4_id,INPUT);


	DIO_voidSetPinValue(PORTA,pin3_id,INPUT);


};


void segment_num(uint8 num)
{
	switch(num)
	{
	case 0:
		DIO_voidSetPinValue(PORTB,pin0_id,LOGIC_LOW);
		DIO_voidSetPinValue(PORTB,pin1_id,LOGIC_LOW);
		DIO_voidSetPinValue(PORTB,pin2_id,LOGIC_LOW);
		DIO_voidSetPinValue(PORTB,pin4_id,LOGIC_LOW);
		break;
	case 1:
		DIO_voidSetPinValue(PORTB,pin0_id,LOGIC_HIGH);
		DIO_voidSetPinValue(PORTB,pin1_id,LOGIC_LOW);
		DIO_voidSetPinValue(PORTB,pin2_id,LOGIC_LOW);
		DIO_voidSetPinValue(PORTB,pin4_id,LOGIC_LOW);
		break;
	case 2:
		DIO_voidSetPinValue(PORTB,pin0_id,LOGIC_LOW);
		DIO_voidSetPinValue(PORTB,pin1_id,LOGIC_HIGH);
		DIO_voidSetPinValue(PORTB,pin2_id,LOGIC_LOW);
		DIO_voidSetPinValue(PORTB,pin4_id,LOGIC_LOW);
		break;
	case 3:
		DIO_voidSetPinValue(PORTB,pin0_id,LOGIC_HIGH);
		DIO_voidSetPinValue(PORTB,pin1_id,LOGIC_HIGH);
		DIO_voidSetPinValue(PORTB,pin2_id,LOGIC_LOW);
		DIO_voidSetPinValue(PORTB,pin4_id,LOGIC_LOW);
		break;
	case 4:
		DIO_voidSetPinValue(PORTB,pin0_id,LOGIC_LOW);
		DIO_voidSetPinValue(PORTB,pin1_id,LOGIC_LOW);
		DIO_voidSetPinValue(PORTB,pin2_id,LOGIC_HIGH);
		DIO_voidSetPinValue(PORTB,pin4_id,LOGIC_LOW);
		break;
	case 5:
		DIO_voidSetPinValue(PORTB,pin0_id,LOGIC_HIGH);
		DIO_voidSetPinValue(PORTB,pin1_id,LOGIC_LOW);
		DIO_voidSetPinValue(PORTB,pin2_id,LOGIC_HIGH);
		DIO_voidSetPinValue(PORTB,pin4_id,LOGIC_LOW);
		break;
	case 6:
		DIO_voidSetPinValue(PORTB,pin0_id,LOGIC_LOW);
		DIO_voidSetPinValue(PORTB,pin1_id,LOGIC_HIGH);
		DIO_voidSetPinValue(PORTB,pin2_id,LOGIC_HIGH);
		DIO_voidSetPinValue(PORTB,pin4_id,LOGIC_LOW);
		break;
	case 7:
		DIO_voidSetPinValue(PORTB,pin0_id,LOGIC_HIGH);
		DIO_voidSetPinValue(PORTB,pin1_id,LOGIC_HIGH);
		DIO_voidSetPinValue(PORTB,pin2_id,LOGIC_HIGH);
		DIO_voidSetPinValue(PORTB,pin4_id,LOGIC_LOW);
		break;
	case 8:
		DIO_voidSetPinValue(PORTB,pin0_id,LOGIC_LOW);
		DIO_voidSetPinValue(PORTB,pin1_id,LOGIC_LOW);
		DIO_voidSetPinValue(PORTB,pin2_id,LOGIC_LOW);
		DIO_voidSetPinValue(PORTB,pin4_id,LOGIC_HIGH);
		break;
	case 9:
		DIO_voidSetPinValue(PORTB,pin0_id,LOGIC_HIGH);
		DIO_voidSetPinValue(PORTB,pin1_id,LOGIC_LOW);
		DIO_voidSetPinValue(PORTB,pin2_id,LOGIC_LOW);
		DIO_voidSetPinValue(PORTB,pin4_id,LOGIC_HIGH);
		break;


	};


}
