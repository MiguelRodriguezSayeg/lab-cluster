#include "MKL27Z644.h"
#include "PWM.h"
void InitPWM(){
		MCG->C1 = MCG_C1_IREFSTEN_MASK | MCG_C1_IRCLKEN_MASK;
		MCG->C2 = MCG_C2_IRCS_MASK;
		SIM->SCGC6 |= SIM_SCGC6_TPM2_MASK;
		SIM->SOPT2 |= SIM_SOPT2_TPMSRC(3);

		TPM2->SC = TPM_SC_CMOD(1) | TPM_SC_PS(5);
		TPM2->CONF|=TPM_CONF_DBGMODE(3);

		SIM->SCGC5 |= SIM_SCGC5_PORTB_MASK;
		PORTB->PCR[18] = PORT_PCR_MUX(3);

		TPM2->CONTROLS[0].CnSC = TPM_CnSC_MSB_MASK | TPM_CnSC_ELSA_MASK;
}

void PWM (uint_16 duty_cycle)
{
	uint_16 rest = 20000-duty_cycle;
	uint_16 periodo_pwm = duty_cycle + rest;
	uint_16 mod = periodo_pwm/4;
	uint_16 cnv = ((mod/(periodo_pwm/1000))*rest)/1000;

	TPM2->MOD = mod;
	TPM2->CONTROLS[0].CnV = cnv;
}

uint_16 girarPWM (uint_8 angulo)
{
	uint_16 duty=(((MAX_DUTY-MIN_DUTY)/180)*angulo)+MIN_DUTY;
	return duty;
}
void delay (volatile uint_8 sec)
{

	volatile uint_16 count=0;
	for(;sec>0;sec--)
		for(count=0;count<=500000;count++);
}
