/*
 * TEMP_Sensor.c
 *
 * Created: 8/27/2020 12:19:43 AM
 *  Author: Ahmed Atef
 */ 

#include "TEMP_Sensor.h"

void TempSensor_init(void)
{
	ADC_init();
}

void TempSensor_Read(uint16* Temp)
{
	 ADC_Read(Temp);

}
