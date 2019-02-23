#ifndef COMMUNICATION_H_
#define COMMUNICATION_H_
#include "UARTDriver.h"
uint_8 COMM_bfnReceiveMsg (uint_8* bpDataRx);
uint_8 COMM_bfnSendMsg (uint_8* bpMsgToSend, uint_8 bMsgSize);
void COMM_vfnDriverInit (void);
#endif /* COMMUNICATION_H_ */
