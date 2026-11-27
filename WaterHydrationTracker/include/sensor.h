#ifndef SENSOR_H
#define SENSOR_H

#include <Arduino.h>

//initialize hx711 sensor
void sensorBegin(uint8_t dataPin, uint8_t clockPin);

//check if hx711 is ready
bool sensorIsReady();

//get raw load cell reading
long sensorReadRaw();

#endif
