/*
 * main.c
 *
 *  Created on: ٠٥‏/٠٣‏/٢٠٢٣
 *      Author: houras
 */
#include<util/delay.h>
#include "STD_TYPES.h"

#include "DIO_int.h"
#include"LED_int.h"
#include"PB_int.h"
#include"SSD_init.h"


int main()
{
	H_Led_void_ledInit(RED_LED);
	H_SSD_void_init();
	while(1)
	{
		H_SSD_void_DisplayNumber(75);
		_delay_ms(200);

	}
	return 0;
}

