#include <Arduino.h>
#include <U8g2lib.h>
#include <Wire.h>

// I2C pins for ESP32-C3 0.42 OLED board
#define SDA_PIN 5
#define SCL_PIN 6

/*
  U8g2 Constructor for the 0.42" OLED
  The display is a SSD1306 72x40.
  We use the U8G2_SSD1306_72X40_ER_F_HW_I2C constructor.
  ER stands for EastRising, a common manufacturer for these small displays.
*/
U8G2_SSD1306_72X40_ER_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);

void setup() {
  Serial.begin(115200);
  Serial.println("ESP32-C3 0.42 OLED Initializing...");

  // Initialize I2C with the specific pins for this board
  Wire.begin(SDA_PIN, SCL_PIN);

  // Initialize the display
  u8g2.begin();
}

void loop() {
  u8g2.clearBuffer();					// clear the internal memory

  // Set font
  u8g2.setFont(u8g2_font_ncenB08_tr);	// choose a suitable font

  // Draw "Hello World"
  u8g2.drawStr(0, 15, "Hello!");
  u8g2.drawStr(0, 30, "ESP32-C3");

  // Draw a small moving pixel to show it's alive
  static int x = 0;
  u8g2.drawPixel(x, 39);
  x = (x + 1) % 72;

  u8g2.sendBuffer();					// transfer internal memory to the display

  delay(50);
}
