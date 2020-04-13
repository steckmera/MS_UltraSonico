/*!
 *  @file MS_UltraSonico.h
 *
 *  @mainpage Manejo del ultrasonico HC-SR04
 *
 *  Written by Steven Mera
 *
 *  Twitter @SteckMera
 */

 /*
 La directiva de preprocesador la usamos para evitar
 problemas si se intenta acceder 2 veces a la libreria
 */
#ifndef MS_UltraSonico_h
#define MS_UltraSonico_h

 /*
 Para tener a disposicion todos los tipos estandar y las constantes del lenguaje arduino
 */
#include "Arduino.h"

 /*
 Definición mediante una clase las respectivas funciones y propiedades.
 */
class MS_UltraSonico {  
  public:
   MS_UltraSonico(int pinTg, int pinEc);
   bool read();
   float distance;
   float duration;
   
  private:
   int _pinTg;
   int _pinEc;  
};

#endif
