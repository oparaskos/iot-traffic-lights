#include <FastLED.h>

// How many leds in your strip?
#define NUM_LEDS 3

// For led chips like WS2812, which have a data line, ground, and power, you just
// need to define DATA_PIN.  For led chipsets that are SPI based (four wires - data, clock,
// ground, and power), like the LPD8806 define both DATA_PIN and CLOCK_PIN
// Clock pin only needed for SPI based chipsets when not using hardware SPI
#define DATA_PIN D2

// Define the array of leds
CRGB leds[NUM_LEDS];

void setup() { 
    FastLED.addLeds<WS2812, DATA_PIN, GRB>(leds, NUM_LEDS);  // GRB ordering is typical
}

void loop() { 
  leds[0] = CRGB::Red;
  FastLED.show();
  delay(1000);
  leds[0] = CRGB::Black;
  leds[1] = CRGB::Orange;
  FastLED.show();
  delay(1000);
  leds[1] = CRGB::Black;
  leds[2] = CRGB::Green;
  FastLED.show();
  delay(1000);
  leds[1] = CRGB::Orange;
  leds[2] = CRGB::Green;
  FastLED.show();
  delay(1000);
  leds[2] = CRGB::Black;
  leds[1] = CRGB::Black;
}