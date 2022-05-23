/*
 * main.c
 *
 *  Created on: May 22, 2022
 *      Author: Dejana
 */

#include <stdlib.h>
#include <util/delay.h>
#include "usart.h"
#include "pangram.h"

int16_t main()
{
	usartInit(9600);
	int8_t str[64];

	int8_t str1[16] = "Unesite string:\r";

	while (1) {
		usartPutString(str1);
		while (!usartAvailable())
			;
		_delay_ms(100);

		usartGetString(str);

		if (pangram(str))
			usartPutString("jeste pangram\r");
		else
			usartPutString("nije pangram\r");
	}
}
