#include <Arduino.h>
#include "FastLED.h"

CRGB leds[51];

void setup() {
  FastLED.addLeds<NEOPIXEL, 8>(leds, 51);
}


void loop() { 
  leds[0] = CRGB::White; FastLED.show(); delay(30); 
  leds[0] = CRGB::Black; FastLED.show(); delay(30);
}