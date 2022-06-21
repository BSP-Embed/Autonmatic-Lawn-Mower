#ifndef EX_FAN_H
#define EX_FAN_H

#include "includes.h"

#define ExFanOn()		EXFAN_PORT |= _BV(EXFAN_PIN)
#define ExFanOff()		EXFAN_PORT &= ~_BV(EXFAN_PIN)

void	ExFanInit		(void);

#endif