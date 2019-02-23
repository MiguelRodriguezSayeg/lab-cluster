#include "MKL27Z644.h"
#ifndef UARTDRIVER_H_
#define UARTDRIVER_H_
#define ERROR 0
#define SUCCESS 1
#define UART_BAUD_RATE 9600
#define UART_BAUD_OSR 15
#define SEL_CLK 8000000
typedef unsigned char uint_8;
typedef unsigned long uint_16;
void UART_vfnDriverInit();
uint_8 UART_bfnSend(uint_8 valor);
uint_8 UART_bfnRead(uint_8* valor);
void UART_vfnDriverInitPorts(void);
#endif
