#include <MSLedRGB.h>

const int pinRed = 10;
const int pinGreen = 11;
const int pinBlue = 12;

int pausa = 2000;

MSLedRGB ledRGB(pinRed, pinGreen, pinBlue);

void setup() {
  Serial.begin(9600);
}

void loop() {
  ledRGB.on(255, 0, 0);   // rojo
  delay(pausa);       

  ledRGB.on(0, 255, 0);   // verde  
  delay(pausa);       // delay por pausa
  
   ledRGB.on(0, 0, 255);   // azul
   delay(pausa);

   Serial.println(ledRGB.state);

   ledRGB.off();

   delay(pausa);

   Serial.println(ledRGB.state);

}
