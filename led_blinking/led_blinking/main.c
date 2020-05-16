/*
 * led_blinking.c
 *
 * Created: 15-05-2020 05:25:36 PM
 * Author : aravind
 */ 

#include <avr/io.h>
#define F_CPU 120000000UL
#include <util/delay.h>
int main(void)
{
	DDRB=0b00010000;
    /* Replace with your application code */
    while (1) 
    {
		PORTB=0B00010000;
		_delay_ms(1000);
		PORTB=0B00000000;
		_delay_ms(1000);
    }
}

