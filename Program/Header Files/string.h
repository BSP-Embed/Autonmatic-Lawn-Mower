#ifndef _STRING_H
#define _STRING_H

//INCLUDES
#include "includes.h"

//DEFINE PROTOTYPES
void	itoa			(signed int n, char s[]);
void	reverse			(char s[]);
void	ltoa			(unsigned long n, char s[]);
double	atof			(char *s);

#if defined FLOAT_T0_STRING > 0
	void ftoa(double n, char *res, int afterpoint);
	int intToStr(int x, char str[], int d);
	void rever(char *str, int len);
#endif

#endif

