/*
 * main.c
 *
 *  Created on: May 22, 2022
 *      Author: Dejana
 */

#include <stdint.h>
#include <util/delay.h>
#include "usart.h"

int16_t main()
{
	int8_t imePrezime[64];
	usartInit(9600);

	int8_t str1[64] = "Unesite svoje ime i prezime:\r";
	int8_t str2[16] = "Zdravo, ";
	int8_t str3[16] = ". :)\r";


	while (1)
	{
		usartPutString(str1);

		while(!usartAvailable())
		;
		_delay_ms(100);

		usartGetString(imePrezime);
		usartPutString(str2);
		usartPutString(imePrezime);
		usartPutString(str3);
	}
}
