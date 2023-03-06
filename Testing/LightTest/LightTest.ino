#include "LPD8806.h"
#include "SPI.h" // Comment out this line if using Trinket or Gemma
#ifdef __AVR_ATtiny85__
 #include <avr/power.h>
#endif

int dataPin  = 11;
int clockPin = 13;

LPD8806 strip = LPD8806(31, dataPin, clockPin);

void setup() {
  // Start up the LED strip
  strip.begin();

  // Update the strip, to start they are all 'off'
  strip.show();  
  
  Serial.begin(9600);
}

void loop() {
  
  colorChase(strip.Color(127,   0,   0), 50); // Red
  delay(10);
  TurnOff();
  delay(10);
  colorChase(strip.Color(127, 127,   0), 50); // Yellow
  delay(10);
  TurnOff();
  delay(10);
  
}

void colorChase(uint32_t c, uint8_t wait) {
  int i;

  // Start by turning all pixels off:
  for(i=0; i<strip.numPixels(); i++) strip.setPixelColor(i, 0);

  // Then display one pixel at a time:
  for(i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, c); // Set new pixel 'on'
  }

  strip.show(); // Refresh to turn off last pixel
}

void TurnOff() {
  int w;
  for(w=0; w<strip.numPixels(); w++) {
    strip.setPixelColor(w, 0); // Set new pixel 'off'
    delay(30);
  }
     
strip.show();
}
