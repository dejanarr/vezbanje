/*
 * main.c
 *
 *  Created on: May 23, 2022
 *      Author: Dejana
 */

#include <stdlib.h>
#include <util/delay.h>
#include "usart.h"

int16_t main()
{
	usartInit(9600);
	int32_t n;

	while (1)
	{
		usartPutString("Unesite brojni izraz: \r");

		while (!usartAvailable())
			;
		_delay_ms(100);

		n = usartOperation();

		usartPutString("\r\n Vrednost izraza je ");
		usartPutString(n);
	}
}
