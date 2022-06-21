#ifndef GRAPHICS_H
#define GRAPHICS_H

#include "includes.h"

void GLCD_Rectangle(unsigned char x, unsigned char y, unsigned char b, unsigned char a);
void GLCD_Circle(unsigned char cx, unsigned char cy ,unsigned char radius);
void GLCD_Line(unsigned int X1,unsigned int Y1,unsigned int X2,unsigned int Y2);

#endif