/*
 * app.c
 *
 *  Created on: Oct 21, 2023
 *      Author: user
 */


#include "DIO_1.h"

 Port_Def* PORTA = ((void*)0x39);
 Port_Def* PORTB = ((void*)0x36);


int main ()
{
	DIO_voidSetPinDirection(PORTA,5,1);
	while(1)
	{
		DIO_voidSetPinValue(PORTA,0,1);
	}
}


