#include <OneWire.h>  // Load Libraries
#include <DallasTemperature.h>
#define Pin 2  // Pin where we connect the sensor
 
OneWire ourWire(Pin); 
DallasTemperature sensors(&ourWire); 

void setup() {  
//Start Serial 
delay(1000);
Serial.begin(9600);
sensors.begin();
}

void loop() {
// Request temperature from sensor
sensors.requestTemperatures();   
// Print Temperature
Serial.print(sensors.getTempCByIndex(0)); 
Serial.println("º");
delay(1000); // Repeat every second
}
