#ifndef KEYBOARD4_4_H
#define KEYBOARD4_4_H

#include "includes.h"

//DEFINE CONSTANT
#define KEY_DELAY 			200
#define MAX_TIME_OUT 		100
#define MASK 			(key_data & 0x0e)

//FUNCTION PROTOTYPES 
void MKBInit(void);
unsigned char get_data(void);
unsigned char  find_col(unsigned char key);

#endif
