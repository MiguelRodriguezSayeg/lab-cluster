/*
 * La señal sale del PTB18 pin 11
 * El GND sale del pin 14
 * Los 3.3 sale P3V3 pin 8
 * */
#include "MKL27Z644.h"
#ifndef PWM_H_
#define PWM_H_
#define MAX_DUTY 2400
#define MIN_DUTY 544
typedef unsigned char uint_8;
typedef unsigned long uint_16;
void PWM (uint_16 duty_cycle);
uint_16 girarPWM (uint_8 angulo);
void InitPWM();
void delay(volatile uint_8 sec);
#endif
