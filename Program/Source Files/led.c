/* led.c : LED interface programs */
#include "led.h"

void ledinit(void) {
	LED_DDR 		|= _BV(LED1_PIN);
	LED_PORT 		&= ~_BV(LED1_PIN);
	#ifdef DUAL_LED
		LED_DDR 		|= _BV(LED2_PIN);
		LED_PORT 		|= _BV(LED2_PIN);
		#ifdef TRI_LED
			LED_DDR 		|= _BV(LED3_PIN);
			LED_PORT 		|= _BV(LED3_PIN);
		#endif
	#endif
}

void blink(int8u nblink, int8u ontime){
	while(nblink--){
		ledon();
		dlyms(ontime);
		ledoff();
		dlyms(100);
	}
}

	
