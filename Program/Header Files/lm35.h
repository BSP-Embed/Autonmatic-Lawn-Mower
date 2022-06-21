#ifndef LM35_H
#define LM35_H

#include "includes.h"

#define ADC_STEP_SIZE		(2.56 / 1024)
#define LM35_TEMP_CO		(0.01)			/* 10mv per degree celcius */
#define TEMP_CONST			((ADC_STEP_SIZE) / (LM35_TEMP_CO))	

double meastemp(int8u disp, uint8_t ChNo);

#endif