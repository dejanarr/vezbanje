/*
 * main.c
 *
 *  Created on: May 22, 2022
 *      Author: Dejana
 */

#include <stdlib.h>
#include <util/delay.h>
#include "usart.h"
#include "ispis.h"

int16_t main()
{
	usartInit(9600);
	int8_t br = 0;
	int8_t tmp = 0;

	int8_t str1[16] = "Unesite rec:\r";
	int8_t str2[16] = "Rec ima ";
	int8_t str3[16] = " samoglasnika.\r";


	while (1)
	{
		usartPutString(str1);

		while(!usartAvailable())
			;
		_delay_ms(100);

		while(usartAvailable())
		{
			tmp = usartGetChar();
			if (tmp == 97 || tmp == 101 || tmp == 105 || tmp == 111 || tmp == 117)
				br++;
		}

		usartPutString(str2);
		ispis(br);
		usartPutString(str3);

		br = 0;
	}
}
