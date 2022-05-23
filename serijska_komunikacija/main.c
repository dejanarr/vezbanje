/*
 * main.c
 *
 *  Created on: May 21, 2022
 *      Author: Dejana
 */
#include "usart.h"
#include <stdint.h>
#include <util/delay.h>

int main()
{
	int8_t hello[16] = "Hello world!\r\n";

	usartInit(9600);
	while(1)
	{
		usartPutString(hello);
		_delay_ms(1000);
	}
}
