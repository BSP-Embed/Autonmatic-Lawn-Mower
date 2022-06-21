#ifndef _MOTOR_H
#define _MOTOR_H

#include "includes.h"

#define mot1on()		MOT_PORT |= _BV(M1_AN)
#define mot1off()		MOT_PORT &= ~_BV(M1_AN)
#define mot2on()		MOT_PORT |= _BV(M2_AN)
#define mot2off()		MOT_PORT &= ~_BV(M2_AN)

#define	MotInit()		M1Init()
#define MotClk()		Mot1Clk()
#define MotAclk()		Mot1Aclk()
#define MotOn()			mot1on()
#define MotOff()		mot1off()

#define Front()			Mot1Aclk()
#define Back()			Mot1Clk()

void	motorinit		(void);
void	Mot1Clk			(void);
void	Mot1Aclk		(void);
void	Mot2Clk			(void);
void	Mot2Aclk		(void);
void	MotStop			(void);
void	Forward			(void);
void	Backward		(void);
void	Left			(void);
void	Right			(void);
void	Stop			(void);

#endif
