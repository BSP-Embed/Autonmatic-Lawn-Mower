#ifndef SERVO_H
#define SERVO_H

#include "includes.h"

//DEFINE CONSTANT
#define		TURN_LDELAY		2000
#define		TURN_RDELAY		5000

//FUNCTION PROTOTYPES 

void servoinit		(void);
void Strt2Right		(void);
void Right2Strt		(void);
void Left2Strt		(void);
void Strt2Left		(void);
void TurnRight		(void);
void TurnLeft		(void);
void Strt2RightSRV2	(void);
void Right2StrtSRV2	(void);
void Left2StrtSRV2	(void);
void Strt2LeftSRV2	(void);

#endif
