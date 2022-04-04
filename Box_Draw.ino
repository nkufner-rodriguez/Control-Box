#include "Adafruit_GFX.h"
#include "SPI.h"
#include "Wire.h"
#include "Adafruit_ILI9341.h"
#include "Adafruit_STMPE610.h"

#define TFT_CS 10
#define TFT_DC 9
Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC);

#define BOXSIZE 45

void setup() {
  Serial.begin(9600);

tft.begin();

tft.fillScreen(ILI9341_BLACK);

//Box Outline, Box Fill, and Text in Box
tft.drawRect(5, 270, BOXSIZE, BOXSIZE, ILI9341_WHITE);
tft.fillRect(5, 270, BOXSIZE, BOXSIZE, ILI9341_WHITE);
  tft.setCursor(14, 275); 
  tft.setTextColor(ILI9341_RED);  tft.setTextSize(5);
  tft.println("<");

tft.drawRect(5, 210, BOXSIZE, BOXSIZE, ILI9341_WHITE);
tft.fillRect(5, 210, BOXSIZE, BOXSIZE, ILI9341_WHITE);
  tft.setCursor(14, 215); 
  tft.setTextColor(ILI9341_RED);  tft.setTextSize(5);
  tft.println(">");

}

void loop() {
  // put your main code here, to run repeatedly:

}
