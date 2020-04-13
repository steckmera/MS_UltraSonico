#include "MS_UltraSonico.h"

const int triggerPin = 5;
const int echoPin = 4;

float duracion;
float distancia;

MS_UltraSonico ultrasonico (triggerPin, echoPin);

void setup() { 
	Serial.begin(9600);

}

void loop() {
	if (ultrasonico.read()) {
		Serial.println("Duracion: (ms) ");
		Serial.println(ultrasonico.duration);
		Serial.println("Distancia: (cm) ");
		Serial.println(ultrasonico.distance);
	
   	}

  	delay(1000);

}
