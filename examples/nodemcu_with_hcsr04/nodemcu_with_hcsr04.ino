#include "Ubidots.h"
#include "MS_UltraSonico.h"
#define TOKEN  "A1E-***********************"  // Put here your Ubidots TOKEN
#define WIFISSID "*"
#define PASSWORD "*"

const int triggerPin = 5; 
const int echoPin = 4; 

float duracion;
float distancia;

Ubidots client(TOKEN, UBI_TCP);
MS_UltraSonico ultrasonico (triggerPin, echoPin);


void setup() {  
  client.wifiConnect(WIFISSID, PASSWORD);
  Serial.begin(9600);

}

void loop() {
  if (ultrasonico.get()) {
  	Serial.println("Duracion: ");
  	Serial.println(ultrasonico.duration);
  	Serial.println("Distancia: ");
  	Serial.println(ultrasonico.distance);
	
  }
  delay(2000);
}
