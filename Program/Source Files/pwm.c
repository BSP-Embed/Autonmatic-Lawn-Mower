#include "pwm.h"


void PWMinit(void) {
	PWM_DDR	|= _BV(PWM_PIN);
	PWM_PORT &= ~_BV(PWM_PIN);
	TCCR2 |= _BV(WGM21) | _BV(WGM20);		/* Fast PWM mode */
	TCCR2 |= _BV(COM21);					/* clear on compare match */
	TCCR2 |= _BV(CS20);						/* Clock for timer/counter2 , no prescalar */
	OCR2 = 0;
}


