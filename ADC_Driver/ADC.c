/*
 * ADC.c
 *
 * Created: 8/27/2020 12:18:05 AM
 *  Author: Ahmed Atef
 */ 


#include "ADC.h"

void ADC_init(void)
{

/**************************** ADC_Voltage refrance ****************/
#if  ADC_VOLTAGE_REFRANCE    ==  ADC_VREF_AVCC


clear_bit(ADMUX , 7);

set_bit(ADMUX , 6);

#endif




#if  ADC_VOLTAGE_REFRANCE    ==  ADC_VREF_AREF


clear_bit(ADMUX , 7);

clear_bit(ADMUX , 6);

#endif



#if  ADC_VOLTAGE_REFRANCE    ==  ADC_VREF_INTERNAL


set_bit(ADMUX , 7);

set_bit(ADMUX , 6);

#endif













/**************************************** ADC DAta reg LEft or Right adj*************/


#if  ADC_ADJUST              ==  ADC_RIGHT_ADJUST // note use right adj when acces by pointer to address of 16 bit 

clear_bit(ADMUX,5);

#endif



#if  ADC_ADJUST              ==  ADC_LEFT_ADJUST // using LEfT adj while using bit wise operators 

set_bit(ADMUX,5);

#endif




/*********************************** ADC Channel selection ******************/

#if ADC_CHANEL             ==   ADC_CHANNEL_0


clear_bit(ADMUX,0);


#endif

#if ADC_CHANEL             ==   ADC_CHANNEL_1


set_bit(ADMUX,0);


#endif

#if ADC_CHANEL             ==   ADC_CHANNEL_2


set_bit(ADMUX,1);


#endif

#if ADC_CHANEL             ==   ADC_CHANNEL_3


set_bit(ADMUX,0);
set_bit(ADMUX,1);



#endif

#if ADC_CHANEL             ==   ADC_CHANNEL_4


set_bit(ADMUX,2);


#endif

#if ADC_CHANEL             ==   ADC_CHANNEL_5


set_bit(ADMUX,0);
set_bit(ADMUX,2);



#endif

#if ADC_CHANEL             ==   ADC_CHANNEL_6


set_bit(ADMUX,1);
set_bit(ADMUX,2);



#endif

#if ADC_CHANEL             ==   ADC_CHANNEL_7


set_bit(ADMUX,0);
set_bit(ADMUX,1);
set_bit(ADMUX,2);


#endif











/************************* ADC Mode selection *******************/

#if ADC_CONVERSION_TRIGGER  ==  ADC_AUTO_TRIGEER

set_bit(ADCSRA,5);
#endif


#if ADC_CONVERSION_TRIGGER  ==  ADC_FREE_RUNNING_MODE
clear_bit(SFIOR,5);
clear_bit(SFIOR,6);
clear_bit(SFIOR,7);

#endif


#if ADC_CONVERSION_TRIGGER  ==  Analog_Comparator

set_bit(SFIOR,5);
#endif


#if ADC_CONVERSION_TRIGGER  ==  External_Interrupts_req0

set_bit(SFIOR,6);
#endif




#if ADC_CONVERSION_TRIGGER  ==  Timer_counter0_comp_match

set_bit(SFIOR,5);
set_bit(SFIOR,6);
#endif


#if ADC_CONVERSION_TRIGGER  ==  Timer_counter0_OVF

set_bit(SFIOR,7);
#endif


#if ADC_CONVERSION_TRIGGER  ==  Timer_counter1_comp_matchB

set_bit(SFIOR,5);
set_bit(SFIOR,7);

#endif


#if ADC_CONVERSION_TRIGGER  ==  Timer_counter1_OVF

set_bit(SFIOR,6);
set_bit(SFIOR,7);

#endif


#if ADC_CONVERSION_TRIGGER  ==  Timer_counter1_Capture_Event

set_bit(SFIOR,5);
set_bit(SFIOR,6);
set_bit(SFIOR,7);

#endif


/***************ADC prescaler select******************/

#if ADC_PRESCALER         ==   ADC_PRESC_128

set_bit(ADCSRA,0);
set_bit(ADCSRA,1);
set_bit(ADCSRA,2);


#endif


#if ADC_PRESCALER         ==   ADC_PRESC_64

clear_bit(ADCSRA,0);
set_bit(ADCSRA,1);
set_bit(ADCSRA,2);


#endif


#if ADC_PRESCALER         ==   ADC_PRESC_32

set_bit(ADCSRA,0);
clear_bit(ADCSRA,1);
set_bit(ADCSRA,2);


#endif



#if ADC_PRESCALER         ==   ADC_PRESC_16

clear_bit(ADCSRA,0);
clear_bit(ADCSRA,1);
set_bit(ADCSRA,2);

#endif





#if ADC_PRESCALER         ==   ADC_PRESC_8

set_bit(ADCSRA,0);
set_bit(ADCSRA,1);
clear_bit(ADCSRA,2);


#endif






#if ADC_PRESCALER         ==   ADC_PRESC_4

clear_bit(ADCSRA,0);
set_bit(ADCSRA,1);
clear_bit(ADCSRA,2);


#endif




#if ADC_PRESCALER         ==   ADC_PRESC_2

clear_bit(ADCSRA,0);
clear_bit(ADCSRA,1);
clear_bit(ADCSRA,2);


#endif


/***************** ADC interrupt enable & disable ******************/
#if ADC_INTERRUPT_STATE    == ADC_INTERRUPT_DISABLE
clear_bit(ADCSRA,3);

#endif




#if ADC_INTERRUPT_STATE    == ADC_INTERRUPT_ENABLE
SREG |=0x80; // set global interrupt 
set_bit(ADCSRA,3);
set_bit(ADCSRA,4);

#endif




//ADC_ENABLE 
set_bit(ADCSRA,7);

}
























void ADC_Read(uint16* value)
{
	uint16 Digital_value=0;
	set_bit(ADCSRA , 6);
	#if ADC_INTERRUPT_STATE == ADC_INTERRUPT_DISABLE
	
	while(!GET_BIT(ADCSRA,4));
	
	Digital_value=ADC_ADjust ; // (ADCH<<2) | (ADCL>>6);
	
	*value= (Digital_value*500)/1024 ; //Vin equation 
	
	#endif
}













