/*
 * ispis.c
 *
 *  Created on: May 22, 2022
 *      Author: Dejana
 */

#include <stdio.h>
#include <avr/io.h>
#include "usart.h"
#include "ispis.h"

void ispis(int8_t c)
{
	int8_t str[64];
	int8_t tmp = 0;
	sprintf(str, "%d", c);
	while(str[tmp] != 0)
	{
		usartPutChar(str[tmp]);
		tmp++;
	}
}
