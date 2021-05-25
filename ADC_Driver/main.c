/*
 * ADC_Driver.c
 *
 * Created: 8/27/2020 12:15:25 AM
 * Author : Ahmed Atef
 */ 

#include "TEMP_Sensor.h"

#include "LCD_Driver.h"


int main(void)
{
	uint16 Temp=0;
	
	
	LCD_init();
	
	
	TempSensor_init();
    /* Replace with your application code */
    while (1) 
    {
		TempSensor_Read(&Temp); //bassing by refrance "ADRESS"
		
		
		clear_LCD();

		LCD_writeint(Temp);
    }
}

