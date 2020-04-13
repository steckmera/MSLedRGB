/*!
 *  @file MSLedRGB.h
 *
 *  @mainpage Manejo de un LED REGB
 *
 *  Written by Steven Mera
 *
 *  Twitter @SteckMera
 */

/*
La directiva de preprocesador la usamos para evitar
problemas si se intenta acceder 2 veces a la libreria
*/

#ifndef MSLedRGB_h
#define MSLedRGB_h

/*
Para tener a disposicion todos los tipos estandar y las constantes del lenguaje arduino
*/
#include "Arduino.h"

/* 
Definicion mediante una clase con sus respectivas funciones y propiedades.
*/
class MSLedRGB {
  public:
   MSLedRGB(int pinR, int pinG, int pinB);
   void on(int colorR, int colorG, int colorB);
   void off();
   bool state;
   int colorR;
   int colorG;
   int colorB;

   
 private:
   int _pinR;
   int _pinG;
   int _pinB;
  

};

#endif
