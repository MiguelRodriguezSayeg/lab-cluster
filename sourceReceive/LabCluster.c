#include "MKL27Z644.h"
#include "PWM.h"
#include "TempDriver.h"
#include "Communication.h"

int main(void) {
    uint_8 data = 0 ;
    uint_8 * apuntador;
    apuntador = &data;
    COMM_vfnDriverInit();
    InitPWM();
    while(1) {
    	COMM_bfnReceiveMsg(apuntador);
    	if(*apuntador>170){
    		*apuntador=170;
    	}
    	else if(*apuntador<10){
    		*apuntador=10;
    	}
    	PWM(girarPWM(*apuntador));
    }
    return 0 ;
}
