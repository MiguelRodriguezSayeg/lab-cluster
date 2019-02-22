#include "ADC_Driver.h"
#include "TempDriver.h"


void TEM_vfnDriverInit (void)
{
        ADC_vfnDriverInit();
}

uint_8 TEM_bfnGetTemp (uint_16 * bpTempValue, uint_8 bTempScale)
{
        if(ADC_bfnReadADC(CHANNEL,bpTempValue))
        {
                if(bTempScale=='C')
                {
                        *bpTempValue = (*bpTempValue - 32) * .5555555;
                        return SUCCESS;
                }
                else if(bTempScale=='K')
                {
                        *bpTempValue = ((*bpTempValue - 32) * .5555555) + 273.15;
                        return SUCCESS;
                }
                else if(bTempScale=='F')
                {
                        return SUCCESS;
                }
                return ERROR;
        }
        else
                return ERROR;
}
