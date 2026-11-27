#include <Arduino.h>
#include "sensor.h"


//hx711 pins
#define HX711_DT 4
#define HX711_SCK 5


void setup() {
    //initialize communication
    Serial.begin(115200);
    delay(1000);

    Serial.println("==============================");
    Serial.println("Water Bottle Hydration Tracker");
    Serial.println("Initializing HX711.");
    Serial.println("==============================");

    //initialize hx711
    sensorBegin(HX711_DT, HX711_SCK);
    Serial.println("Sensor Initialized.");
}


void loop() {
    //check if sensor is ready to read raw load cell value
    if (sensorIsReady()) {
        long reading = sensorReadRaw();

        Serial.print("Raw Load Cell Reading: ");
        Serial.println(reading);
    } else {
        Serial.println("Waiting for HX711...");
    }

    delay(1000);
}
