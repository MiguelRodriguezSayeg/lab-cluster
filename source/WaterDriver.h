#include "ADC_Driver.h"
#ifndef TEMPDRIVER_H_
#define TEMPDRIVER_H_
#define CHANNEL 0b01100
void WTR_vfnDriverInit (void);
uint_8 WTR_bfnGetLvl (uint_8 * bpTempValue);
#endif
