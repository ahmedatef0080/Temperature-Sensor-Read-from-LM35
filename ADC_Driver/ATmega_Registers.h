﻿/*
 * ATmega_Registers.h
 *
 * Created: 25/07/2020 06:28:44 م
 *  Author: Ali
 */ 


#ifndef ATMEGA_REGISTERS_H_
#define ATMEGA_REGISTERS_H_

#include "STD.h"
#include "DIO.h"

/*********************************  DIO  ********************************/

#define   DDRA    (*(volatile uint8*)(0x3A))
#define   PORTA   (*(volatile uint8*)(0x3B))
#define   PINA    (*(volatile uint8*)(0x39))

#define   DDRB    (*(volatile uint8*)(0x37))
#define   PORTB   (*(volatile uint8*)(0x38))
#define   PINB    (*(volatile uint8*)(0x36))

#define   DDRC    (*(volatile uint8*)(0x34))
#define   PORTC   (*(volatile uint8*)(0x35))
#define   PINC    (*(volatile uint8*)(0x33))

#define  PORTD    (*(volatile uint8*)(0x32))
#define  PIND     (*(volatile uint8*)(0x30))
#define  DDRD     (*(volatile uint8*)(0x31))

/******************************************* Interrupt *************************/
#define SREG              (*(volatile uint8 *)(0x5F))
#define GICR              (*(volatile uint8 *)(0x5B))
#define GIFR              (*(volatile uint8 *)(0x5A))
#define MCUCR             (*(volatile uint8 *)(0x55))
#define MCUCSR            (*(volatile uint8 * )0x54))

/*************************************  ADC_REGESTER   *****************************************/
#define ADMUX       (*(volatile uint8 *)(0x27))
#define ADCSRA      (*(volatile uint8 *)(0X26))
#define ADCH        (*(volatile uint8 *)(0X25))
#define ADCL        (*(volatile uint8 *)(0X24))
#define SFIOR       (*(volatile uint8 *)(0X50))
#define ADC_ADjust  (*(volatile uint16 *)(0X24))



/************************************************* Timer 0 ****************************************/

#define TCNT0          (*(volatile uint8 *)(0x52))
#define TCCR0          (*(volatile uint8 *)(0x53))
#define OCR0           (*(volatile uint8 *)(0x5C))
#define TIMSK          (*(volatile uint8 *)(0x59))



/******************************************** tIMER 1 *****************************/

 
#define TCNT1A       (*(volatile uint8 *)(0x4F))
#define TCCR1B       (*(volatile uint8 *)(0x4E))
#define OCR1A        (*(volatile uint16 *)(0x4A))
#define ICR1         (*(volatile uint16 *)(0x46))  









#endif /* ATMEGA_REGISTERS_H_ */