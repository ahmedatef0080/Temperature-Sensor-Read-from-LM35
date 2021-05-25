/*
 * ATMEGA32_REGSITER.h
 *
 * Created: 8/18/2020 7:08:02 PM
 *  Author: Ahmed Atef
 */ 
#ifdef ATMEGA32_REGSITER_H_
#define ATMEGA32_REGSITER_H_

/*********************************DIO Regester***************************************/
#define DDRA (*volatile (uint8*)0x3A)
#define PORTA  (*volatile(uint8*)0x3B)
#define PINA (*volatile(uint8*)0x39)
#define DDRB (*volatile(uint8*)0x37)
#define PORTB (*volatile(uint8*)0x38)
#define PINB (*volatile(uint8*)0x36)
#define DDRC (*volatile (uint8*)0x34)
#define  PORTC (*volatile(uint8*)0x35)
#define PINC (*volatile (uint8*)0x33)
#define DDRD (*volatile(uint8*)0x31)
#define PORTD (*volatile(uint8*)0x32)
#define PIND (*volatile(uint8*)0x30)




#endif
