/*
 * capitalise.c
 *
 *  Created on: May 22, 2022
 *      Author: Dejana
 */

#include "capitalise.h"

void capitalise(int8_t *s)
{
	while (*s != 0)
	{
		if (*s >= 97 && *s <= 122)
			*s -= 32;
		s++;
	}
}
