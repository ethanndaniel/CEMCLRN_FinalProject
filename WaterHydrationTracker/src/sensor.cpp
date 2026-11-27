#include "sensor.h"
#include "HX711.h"

//hx711 object
static HX711 scale;

// initialize hx711
void sensorBegin(uint8_t dataPin, uint8_t clockPin) {
    scale.begin(dataPin, clockPin);
}

//check if hx711 is ready
bool sensorIsReady() {
    return scale.is_ready();
}

//get raw load cell reading
long sensorReadRaw() {
    return scale.read();
}
