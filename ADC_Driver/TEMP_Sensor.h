/*
 * TEMP_Sensor.h
 *
 * Created: 8/27/2020 12:19:20 AM
 *  Author: Ahmed Atef
 */ 


#ifndef TEMP_SENSOR_H_
#define TEMP_SENSOR_H_

#include "ADC.h"


void TempSensor_init(void);


void TempSensor_Read(uint16* Temp);


#endif /* TEMP_SENSOR_H_ */