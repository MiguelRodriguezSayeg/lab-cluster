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
    	if(*apuntador>180){
    		*apuntador=180;
    	}
    	PWM(girarPWM(*apuntador));
    }
    return 0 ;
}
