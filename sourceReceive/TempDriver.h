#ifndef TEMPDRIVER_H_
#define TEMPDRIVER_H_
#include "ADC_Driver.h"
#define CHANNEL 0b11010
void TEM_vfnDriverInit (void);
uint_8 TEM_bfnGetTemp (uint_16 * bpTempValue, uint_8 bTempScale);
#endif
