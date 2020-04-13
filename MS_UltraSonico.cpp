/*!
 *  @file MS_UltraSonico.cpp
 *
 *  @mainpage Manejo del ultrasonico HC-SR04
 *
 *  Written by Steven Mera
 *
 *  Twitter @SteckMera
 */

#include "MS_UltraSonico.h"
#include "Arduino.h"

 /*
 Implementación del constructor
 */
MS_UltraSonico::MS_UltraSonico(int pinTg, int pinEc) {
  _pinTg = pinTg;
  _pinEc = pinEc;

  pinMode(_pinTg, OUTPUT);
  pinMode(_pinEc, INPUT);
}

/*
Implementación del metodo para leer los valores del sensor. 
*/
bool MS_UltraSonico::read() {
  digitalWrite(_pinTg, LOW);
  delayMicroseconds(2);
  
  digitalWrite(_pinTg, HIGH);
  delayMicroseconds(10);
  digitalWrite(_pinTg, LOW);
  
  pinMode(_pinEc, INPUT);
 
  duration = pulseIn(_pinEc, HIGH);
  distance = (duration/2) / 29.1;

  return (duration > 0);
}

