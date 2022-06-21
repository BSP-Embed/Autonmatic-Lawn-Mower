#ifndef SHOCK_H
#define SHOCK_H

#include "includes.h"

#define ShockOn()	SHOCK_PORT |= _BV(SHOCK_PIN)
#define ShockOff()	SHOCK_PORT &= ~_BV(SHOCK_PIN)

void	rlyinit		(void);

#endif