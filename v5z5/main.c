/*
 * main.c
 *
 *  Created on: May 23, 2022
 *      Author: Dejana
 */

#include <stdlib.h>
#include <util/delay.h>
#include "usart.h"
#include "funkcije.h"

int16_t main()
{
	usartInit(9600);
	int8_t dragulji[64], kamenje[64];
	int8_t br;

	while(1)
	{
		usartPutString("Unesite dragulje i kamenje:\r");
		while(!usartAvailable())
			;
		_delay_ms(100);

		ucitajDragulje(dragulji);
		usartGetString(kamenje);

		br = prebrojDragulje(dragulji, kamenje);

		ispis(br);

		usartPutString("\r");
	}
}
