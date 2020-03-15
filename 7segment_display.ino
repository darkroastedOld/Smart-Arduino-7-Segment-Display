#include <FastLED.h>

#define NUM_LEDS 7 //Number of leds (we use 7 for a 7segment display)


#define DATA_PIN 3  //LED data pin in
#define CLOCK_PIN 13 

#define COLOR Green  //Color that the LED's will become
#define DELAY 2000 //Time a digit stays on the screen

CRGB leds[NUM_LEDS];

void setup() { 
    FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);  

}

void loop() { 
//Uncomment the line of the digit or animation you want to display
  //looping();
  digit_1();
  digit_2();
  digit_3();
  digit_4();
  digit_5();
  digit_6();
  digit_7();
  digit_8();
  digit_9();
  digit_0();
  }

void looping() {  //Custom funtion for the looping animation can be called using looping();
  leds[0] = CRGB::COLOR;
  FastLED.show();
  delay(100);
  leds[0] = CRGB::Black;
  FastLED.show();
  delay(1);
  leds[1] = CRGB::COLOR;
  FastLED.show();
  delay(100);
  leds[1] = CRGB::Black;
  FastLED.show();
  delay(1);
  leds[5] = CRGB::COLOR;
  FastLED.show();
  delay(100);
  leds[5] = CRGB::Black;
  FastLED.show();
  delay(1);
  leds[4] = CRGB::COLOR;
  FastLED.show();
  delay(100);
  leds[4] = CRGB::Black;
  FastLED.show();
  delay(1);
  leds[3] = CRGB::COLOR;
  FastLED.show();
  delay(100);
  leds[3] = CRGB::Black;
  FastLED.show();
  delay(1);
  leds[2] = CRGB::COLOR;
  FastLED.show();
  delay(100);
  leds[2] = CRGB::Black;
  FastLED.show();
  delay(1);
  leds[5] = CRGB::COLOR;
  FastLED.show();
  delay(100);
  leds[5] = CRGB::Black;
  FastLED.show();
  delay(1);
  leds[6] = CRGB::COLOR;
  FastLED.show();
  delay(100);
  leds[6] = CRGB::Black;
  FastLED.show();
  delay(DELAY);

          }

void digit_1() {
  leds[2] = CRGB::COLOR;  //Turn on the leds
  FastLED.show();
  leds[1] = CRGB::COLOR;
  FastLED.show();
  delay(DELAY);
  leds[2] = CRGB::Black;  //Turn off the leds
  FastLED.show();
  leds[1] = CRGB::Black;
  FastLED.show();
}

void digit_2() {
  leds[0] = CRGB::COLOR;  //Turn on the leds
  FastLED.show();
  leds[6] = CRGB::COLOR;
  FastLED.show();
  leds[5] = CRGB::COLOR;
  FastLED.show();
  leds[2] = CRGB::COLOR;
  FastLED.show();
  leds[3] = CRGB::COLOR;
  FastLED.show();
  delay(DELAY);
  leds[0] = CRGB::Black;  //Turn off the leds
  FastLED.show();
  leds[6] = CRGB::Black;
  FastLED.show();
  leds[5] = CRGB::Black;
  FastLED.show();
  leds[2] = CRGB::Black;
  FastLED.show();
  leds[3] = CRGB::Black;
  FastLED.show();
  
  }



void digit_3() {
  leds[3] = CRGB::COLOR;  //Turn on the leds
  FastLED.show();
  leds[2] = CRGB::COLOR;
  FastLED.show();
  leds[5] = CRGB::COLOR;
  FastLED.show();
  leds[1] = CRGB::COLOR;
  FastLED.show();
  leds[0] = CRGB::COLOR;
  FastLED.show();
  delay(DELAY);
  leds[3] = CRGB::Black;  //Turn off the leds
  FastLED.show();
  leds[2] = CRGB::Black;
  FastLED.show();
  leds[5] = CRGB::Black;
  FastLED.show();
  leds[1] = CRGB::Black;
  FastLED.show();
  leds[0] = CRGB::Black;
  FastLED.show();
  
  }

  //
  void digit_4() {
  leds[4] = CRGB::COLOR;  //Turn on the leds
  FastLED.show();
  leds[2] = CRGB::COLOR;
  FastLED.show();
  leds[5] = CRGB::COLOR;
  FastLED.show();
  leds[1] = CRGB::COLOR;
  FastLED.show();
  delay(DELAY);
  leds[4] = CRGB::Black;  //Turn off the leds
  FastLED.show();
  leds[2] = CRGB::Black;
  FastLED.show();
  leds[5] = CRGB::Black;
  FastLED.show();
  leds[1] = CRGB::Black;
  FastLED.show();

  
  }


  


void digit_5() {
  leds[0] = CRGB::COLOR;  //Turn on the leds
  FastLED.show();
  leds[1] = CRGB::COLOR;
  FastLED.show();
  leds[5] = CRGB::COLOR;
  FastLED.show();
  leds[4] = CRGB::COLOR;
  FastLED.show();
  leds[3] = CRGB::COLOR;
  FastLED.show();
  delay(DELAY);
  leds[0] = CRGB::Black;  //Turn off the leds
  FastLED.show();
  leds[1] = CRGB::Black;
  FastLED.show();
  leds[5] = CRGB::Black;
  FastLED.show();
  leds[4] = CRGB::Black;
  FastLED.show();
  leds[3] = CRGB::Black;
  FastLED.show();

}


void digit_6() {
  leds[3] = CRGB::COLOR;  //Turn on the leds
  FastLED.show();
  leds[4] = CRGB::COLOR;
  FastLED.show();
  leds[5] = CRGB::COLOR;
  FastLED.show();
  leds[6] = CRGB::COLOR;
  FastLED.show();
  leds[1] = CRGB::COLOR;
  FastLED.show();
  leds[0] = CRGB::COLOR;
  FastLED.show();
  delay(DELAY);
  leds[3] = CRGB::Black;  //Turn off the leds
  FastLED.show();
  leds[4] = CRGB::Black;
  FastLED.show();
  leds[5] = CRGB::Black;
  FastLED.show();
  leds[6] = CRGB::Black;
  FastLED.show();
  leds[0] = CRGB::Black;
  FastLED.show();
  leds[1] = CRGB::Black;
  FastLED.show();
  
  }


void digit_7() {
  leds[3] = CRGB::COLOR;  //Turn on the leds
  FastLED.show();
  leds[2] = CRGB::COLOR;
  FastLED.show();
  leds[1] = CRGB::COLOR;
  FastLED.show();
  delay(DELAY);
  leds[3] = CRGB::Black;  //Turn off the leds
  FastLED.show();
  leds[2] = CRGB::Black;
  FastLED.show();
  leds[1] = CRGB::Black;
  FastLED.show();
}


void digit_8() {
  leds[3] = CRGB::COLOR;  //Turn on the leds
  FastLED.show();
  leds[4] = CRGB::COLOR;
  FastLED.show();
  leds[5] = CRGB::COLOR;
  FastLED.show();
  leds[6] = CRGB::COLOR;
  FastLED.show();
  leds[1] = CRGB::COLOR;
  FastLED.show();
  leds[0] = CRGB::COLOR;
  FastLED.show();
  leds[2] = CRGB::COLOR;
  FastLED.show();
  delay(DELAY);
  leds[3] = CRGB::Black;  //Turn off the leds
  FastLED.show();
  leds[4] = CRGB::Black;
  FastLED.show();
  leds[5] = CRGB::Black;
  FastLED.show();
  leds[6] = CRGB::Black;
  FastLED.show();
  leds[0] = CRGB::Black;
  FastLED.show();
  leds[1] = CRGB::Black;
  FastLED.show();
  leds[2] = CRGB::Black;
  FastLED.show();
  }

void digit_9() {
  leds[3] = CRGB::COLOR;  //Turn on the leds
  FastLED.show();
  leds[4] = CRGB::COLOR;
  FastLED.show();
  leds[2] = CRGB::COLOR;
  FastLED.show();
  leds[5] = CRGB::COLOR;
  FastLED.show();
  leds[1] = CRGB::COLOR;
  FastLED.show();
  leds[0] = CRGB::COLOR;
  FastLED.show();
  delay(DELAY);
  leds[3] = CRGB::Black;  //Turn off the leds
  FastLED.show();
  leds[4] = CRGB::Black;
  FastLED.show();
  leds[2] = CRGB::Black;
  FastLED.show();
  leds[5] = CRGB::Black;
  FastLED.show();
  leds[1] = CRGB::Black;
  FastLED.show();
  leds[0] = CRGB::Black;
  FastLED.show();
  
  }

void digit_0() {
  leds[3] = CRGB::COLOR;  //Turn on the leds
  FastLED.show();
  leds[4] = CRGB::COLOR;
  FastLED.show();
  leds[6] = CRGB::COLOR;
  FastLED.show();
  leds[1] = CRGB::COLOR;
  FastLED.show();
  leds[0] = CRGB::COLOR;
  FastLED.show();
  leds[2] = CRGB::COLOR;
  FastLED.show();
  delay(DELAY);
  leds[3] = CRGB::Black;  //Turn off the leds
  FastLED.show();
  leds[4] = CRGB::Black;
  FastLED.show();
  leds[6] = CRGB::Black;
  FastLED.show();
  leds[0] = CRGB::Black;
  FastLED.show();
  leds[1] = CRGB::Black;
  FastLED.show();
  leds[2] = CRGB::Black;
  FastLED.show();
  }
