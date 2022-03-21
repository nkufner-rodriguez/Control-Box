//Must use for screen to work
#include "SPI.h"
#include "Adafruit_GFX.h"
#include "Adafruit_ILI9341.h"


#define TFT_DC 9
#define TFT_CS 10

Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC);
/*
  Uses a for loop to print numbers in various formats.
*/
void setup() {
  Serial.begin(9600); // open the serial port at 9600 bps:

  tft.begin();

  Serial.print(F("Screen fill"));
  Serial.println(testFillScreen());
  delay(500);

    Serial.print(F("Text"));
  Serial.println(testText());
  delay(1000);
//preps screen
}

/*
 * Startup Screen
 */
void loop(){
}
 unsigned long testFillScreen() {
  unsigned long start = micros();
  tft.setRotation(1);
 
  tft.fillScreen(ILI9341_BLACK); //Tells screen background color
  tft.setCursor(60, 100);
  tft.setTextColor(ILI9341_WHITE);  tft.setTextSize(3);
  tft.println("Welcome!");
 
  tft.fillScreen(ILI9341_RED);
  tft.setCursor(60, 100);
  tft.setTextColor(ILI9341_WHITE);  tft.setTextSize(3);
  tft.println("Welcome!");
 
  tft.fillScreen(ILI9341_GREEN);
  tft.setCursor(60, 100);
  tft.setTextColor(ILI9341_WHITE);  tft.setTextSize(3);
  tft.println("Welcome!");
 
  tft.fillScreen(ILI9341_BLUE);
  tft.setCursor(60, 100);
  tft.setTextColor(ILI9341_WHITE);  tft.setTextSize(3);
  tft.println("Welcome!");
 
  tft.fillScreen(ILI9341_BLACK);
  tft.setCursor(60, 100);
  tft.setTextColor(ILI9341_WHITE);  tft.setTextSize(3);
  tft.println("Welcome!");
  delay(600);
  
  return micros() - start;

 }
 /*
  * Temperature static text
  */
unsigned long testText() {
  tft.fillScreen(ILI9341_BLUE);
  unsigned long start = micros();
  
  tft.setCursor(5, 10);
  tft.setTextColor(ILI9341_WHITE);  tft.setTextSize(2);
  tft.println("Temp 1:");

  tft.setCursor(5, 30);
  tft.setTextColor(ILI9341_WHITE);  tft.setTextSize(2);
  tft.println("Temp 2:");

  tft.setCursor(5, 50);
  tft.setTextColor(ILI9341_WHITE);  tft.setTextSize(2);
  tft.println("Temp 3:"); 
  
  tft.setCursor(5, 70);
  tft.setTextColor(ILI9341_WHITE);  tft.setTextSize(2);
  tft.println("Temp 4:");
  
  tft.setCursor(5, 90);
  tft.setTextColor(ILI9341_WHITE);  tft.setTextSize(2);
  tft.println("Temp 5:");
  
  tft.setCursor(5, 110);
  tft.setTextColor(ILI9341_WHITE);  tft.setTextSize(2);
  tft.println("Temp 6:");
  
  tft.setCursor(5, 130);
  tft.setTextColor(ILI9341_WHITE);  tft.setTextSize(2);
  tft.println("Temp 7:");
  
  tft.setCursor(5, 150);
  tft.setTextColor(ILI9341_WHITE);  tft.setTextSize(2);
  tft.println("Temp 8:");

  tft.setCursor(5, 170);
  tft.setTextColor(ILI9341_WHITE);  tft.setTextSize(2);
  tft.println("Temp 9:");

  tft.setCursor(5, 190);
  tft.setTextColor(ILI9341_WHITE);  tft.setTextSize(2);
  tft.println("Temp 10:");

  tft.setCursor(150, 10);
  tft.setTextColor(ILI9341_WHITE);  tft.setTextSize(2);
  tft.println("Current Temp:");
  
  return micros()-start;
  
}
