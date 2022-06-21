#ifndef PWM_H
#define PWM_H

#include "includes.h"

/******* DEFINE CONSTANT    *****************/
#define PWMDC(x)			(OCR2 = (x) * 2.55)


/******* DEFINE FUNCTION PROTOTYPE **********/
void PWMinit(void);


#endif