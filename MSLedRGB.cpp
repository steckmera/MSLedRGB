/*!
 *  @file MSLedRGB.cpp
 *
 *  @mainpage Manejo de un LED REGB
 *
 *  Written by Steven Mera
 *
 *  Twitter @SteckMera
 */

#include "MSLedRGB.h"
#include "Arduino.h"

MSLedRGB::MSLedRGB(int pinR, int pinG, int pinB) {
  _pinR = pinR;
  _pinG = pinG;
  _pinB = pinB;

  pinMode(_pinR, OUTPUT);
  pinMode(_pinG, OUTPUT);
  pinMode(_pinB, OUTPUT);
}


void MSLedRGB::on(int colorRed, int colorGreen, int colorBlue) {

    colorR = colorRed;
    colorG = colorGreen;
    colorB = colorBlue;

    analogWrite(_pinR, colorR);
    analogWrite(_pinG, colorG);
    analogWrite(_pinB, colorB);

    state = true;
}

void MSLedRGB::off() {

    colorR = 0;
    colorG = 0;
    colorB = 0;

    analogWrite(_pinR, colorR);
    analogWrite(_pinG, colorG);
    analogWrite(_pinB, colorB);

    state = false;
}


