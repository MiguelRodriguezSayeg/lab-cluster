#include "Communication.h"
#include "PWM.h"
#include "WaterDriver.h"
#define CONVERSION 3.6

int main(void)
{

	WTR_vfnDriverInit ();
	COMM_vfnDriverInit ();

	uint_8 agua = 0 ;
    uint_8 grados = 0;
    uint_8* pointer_agua = &agua;
    uint_8 * pointer_grados = &grados;

    while(1)
    {
    	if (WTR_bfnGetLvl (pointer_agua))
		{
    		if (agua > 50)
    		{
    			agua = 50;
    		}
    		grados = agua * CONVERSION;
    		//PWM(girarPWM(*pointer_grados));
    		COMM_bfnSendMsg (pointer_grados,8);
		}


    }
    return 0 ;
}
