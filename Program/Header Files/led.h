#ifndef _LED_H
#define _LED_H

#include	"includes.h"

//DEFINE MACRO
#define ledon()				led1on()
#define ledoff()			led1off()

#define	led1on()			LED_PORT |= _BV(LED1_PIN)
#define	led1off()			LED_PORT &= ~_BV(LED1_PIN)

#define	led2on()			LED_PORT &= ~_BV(LED2_PIN)
#define	led2off()			LED_PORT |= _BV(LED2_PIN)

#define	led3on()			LED_PORT &= ~_BV(LED3_PIN)
#define	led3off()			LED_PORT |= _BV(LED3_PIN)

//FUNCTION PROTOTYPES
void blink		(int8u nblink, int8u ontime);
void		ledinit	(void);

#endif
