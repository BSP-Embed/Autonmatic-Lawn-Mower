#ifndef SPRINKLER_H
#define SPRINKLER_H

#include "includes.h"

#define SprinkOn()		SPRINK_PORT |= _BV(SPRINK_PIN)
#define SprinkOff()		SPRINK_PORT &= ~_BV(SPRINK_PIN)

void	SprinkInit		(void);

#endif