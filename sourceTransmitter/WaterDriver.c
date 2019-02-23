#include "ADC_Driver.h"
#include "WaterDriver.h"


void WTR_vfnDriverInit (void)
{
        ADC_vfnDriverInit();
        ADC_vfnADCPortInit();
}
uint_8 WTR_bfnGetLvl (uint_8 * bpTempValue)
{

        if(ADC_bfnReadADC(CHANNEL,bpTempValue))
        	return SUCCESS;
        else
            return ERROR;
}
