#ifndef OTP_H
#define OTP_H

#include "includes.h"

//DEFINE CONSTANT
#define MAGIC_NO				96

void chkEEPROM(void);
void genOTP(char *OTP);

#endif