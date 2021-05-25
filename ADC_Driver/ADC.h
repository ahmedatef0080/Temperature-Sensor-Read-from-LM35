/*
 * ADC.h
 *
 * Created: 8/27/2020 12:18:26 AM
 *  Author: Ahmed Atef
 */ 


#ifndef ADC_H_
#define ADC_H_


#include "ATmega_Registers.h"
#include "BIT_MATH.h"
#include "ADC_Cfg.h"



#define ADC_VREF_AVCC                0
#define ADC_VREF_AREF                1
#define ADC_VREF_INTERNAL            2



/******************************************************CHANNEL_SELECT******************************/
#define ADC_CHANNEL_0                0
#define ADC_CHANNEL_1                1
#define ADC_CHANNEL_2                2
#define ADC_CHANNEL_3                3
#define ADC_CHANNEL_4                4
#define ADC_CHANNEL_5                5
#define ADC_CHANNEL_6                6
#define ADC_CHANNEL_7                7



/******************************************************** ADC Select Mode *******/ 

#define ADC_AUTO_TRIGEER             0

#define ADC_FREE_RUNNING_MODE        1

#define Analog_Comparator            2

#define External_Interrupts_req0     3

#define Timer_counter0_comp_match    4

#define Timer_counter0_OVF           5

#define Timer_counter1_comp_matchB   6


#define Timer_counter1_OVF           7


#define Timer_counter1_Capture_Event 8





/************** pre scaler select *****************/

#define ADC_PRESC_128                0
#define ADC_PRESC_64                 1
#define ADC_PRESC_32                 2
#define ADC_PRESC_16                 3
#define ADC_PRESC_8                  4
#define ADC_PRESC_4                  5
#define ADC_PRESC_2                  6


/****************** ADC interrupt enable & disable **************/

#define ADC_INTERRUPT_ENABLE         0

#define ADC_INTERRUPT_DISABLE        1


#define ADC_RIGHT_ADJUST             0


#define ADC_LEFT_ADJUST              1




void ADC_init(void);



void ADC_Read(uint16* value);



#endif /* ADC_H_ */