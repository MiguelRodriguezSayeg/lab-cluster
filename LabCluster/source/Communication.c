#include "Communication.h"
#include "UARTDriver.h"
void COMM_vfnDriverInit (void){
        UART_vfnDriverInit();
}

uint_8 COMM_bfnSendMsg (uint_8* bpMsgToSend, uint_8 bMsgSize)
{
        uint_8 checksum = bMsgSize/8;
        for(;bMsgSize>=8;bMsgSize-=8)
        {
                if(UART_bfnSend(*bpMsgToSend))
                {
                        bpMsgToSend++;
                        checksum--;
                }
                else
                        return ERROR;
        }
        if(checksum == 0)
                return SUCCESS;
        else
                return ERROR;
}
uint_8 COMM_bfnReceiveMsg (uint_8* bpDataRx)
{
        if(UART_bfnRead(bpDataRx))
                return SUCCESS;
        else
                return ERROR;
}
