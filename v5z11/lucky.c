/*
 * lucky.c
 *
 *  Created on: May 23, 2022
 *      Author: Dejana
 */

#include <stdlib.h>
#include <avr/io.h>
#include "lucky.h"
#include "usart.h"

int8_t isLucky(int16_t num)
{
	if (num % 2 == 0)
	{
		return 0;
	}

	int8_t brojevi[num];
	int8_t tmp;

	for (int8_t i = 1; i < num + 1; i++)
	{
		if (i % 2 == 0)
			brojevi[i - 1] = 0;
		else
			brojevi[i - 1] = 1;
	}

