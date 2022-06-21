#ifndef MPS20N40_H
#define MPS20N40_H

#include "includes.h"

#define PRES_DELTA			250
#define ADC_CONST			(0.0000152)		/* SCALE BY 10 i.e 100mL = 1L */
#define MeasFuel(x)			MeasPres(x)

double	MeasPres	(int8u disp);
void	ConfigSens	(void);
#endif

