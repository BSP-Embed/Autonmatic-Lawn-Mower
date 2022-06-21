#ifndef voicerecognition_H
#define voicerecognition_H

//INCLUDE USER DEFINED HEADER FILE
#include "includes.h"

//DEFINE PORTS/PINS

//DEFINE MACROS

//DEFINE CONSTANT
#define CMD_LEVEL       'v' // set sd level <1>
#define CMD_TIMEOUT     'o' // set timeout <1>
#define CMD_TRAIN_SD    't' // train sd command at group <1> pos <2>
#define CMD_RECOG_SD    'd' // do sd recog at group <1> (0 = trigger mixed si/sd)
#define CMD_ERASE_SD    'e' // reset command at group <1> pos <2>

#define STS_ERROR       'e' // signal error code <1-2>
#define STS_INVALID     'v' // invalid command or argument
#define STS_AWAKEN		'w' // wake up from the power down mode
#define STS_TIMEOUT     't' // timeout expired
#define STS_INTERR      'i' // back from aborted recognition (see 'break')
#define STS_SUCCESS     'o' // no errors status
#define STS_RESULT      'r' // recognised sd command <1> - training similar to sd <1>
#define STS_SIMILAR     's' // recognised si <1> (in mixed si/sd) - training similar to si <1>


//DEFINE USER DEFINED DATA TYPE

//DEFINE FUNCTION PROTOTYPE
unsigned char VRInit(void);

unsigned char VoiceEraseTraining(void);
unsigned char EraseTraining(unsigned char GroupIndex, unsigned char Position);

unsigned char VoiceTrainCommand(void);
static void SelectIndex(void);
static unsigned char SpeakNow(void);
static unsigned char TrainCommand(unsigned char GroupIndex, unsigned char Position);

unsigned char VoiceRecognize(void);
unsigned char SDRecognize(unsigned char GroupIndex);

void setTimeOut(void);
void AddSDComm(void);
void SetLevel(void);
int8u VrTrain(char GroupID, int8u index);
#endif
