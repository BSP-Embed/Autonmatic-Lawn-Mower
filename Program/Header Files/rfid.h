#ifndef RFID_H
#define RFID_H

#include "includes.h"

/******** DEFINE FUNCION PROTOTYPES ********/
int8u readtag(void);
static int8u veritag(char *tag_temp, char *tag);

#endif