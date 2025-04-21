

#ifndef __AIR_QUALITY_SENSOR_H__
#define __AIR_QUALITY_SENSOR_H__

#include "stm32l4xx_hal.h"

// Air quality levels as constants
#define FORCE_SIGNAL   0
#define HIGH_POLLUTION 1
#define LOW_POLLUTION  2
#define FRESH_AIR      3

// Pin for the Air Quality Sensor (you need to set this in your main code)
extern int air_quality_pin;

// Variables to track sensor readings
extern int lastVoltage;
extern int currentVoltage;
extern int standardVoltage;

extern long voltageSum;
extern int volSumCount;
extern long lastStdVolUpdated;

// Function declarations
void AirQualitySensor_Init(void);
int  AirQualitySensor_ReadValue(void);
int  AirQualitySensor_CalculateSlope(void);
void AirQualitySensor_UpdateStandardVoltage(void);

#endif // __AIR_QUALITY_SENSOR_H__

