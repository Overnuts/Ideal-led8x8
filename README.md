# ESP32-C3 Mini 0.42" OLED

This project provides a basic example for using the ESP32-C3 development board with an integrated 0.42-inch OLED display (72x40 pixels).

## Hardware Specifications

- **Microcontroller:** ESP32-C3 (Single-core RISC-V)
- **Display:** 0.42" OLED (SSD1306)
- **Resolution:** 72x40 pixels
- **I2C Pins:**
  - **SDA:** GPIO 5
  - **SCL:** GPIO 6

## Environment Setup

### Arduino IDE

1.  **Install ESP32 Board Support:**
    - Go to **File > Preferences**.
    - Add `https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json` to the **Additional Board Manager URLs**.
    - Go to **Tools > Board > Boards Manager**, search for `esp32`, and install the latest version.
    - Select **ESP32C3 Dev Module** from the board list.

2.  **Install U8g2 Library:**
    - Go to **Sketch > Include Library > Manage Libraries...**.
    - Search for `U8g2` and install the library by Oliver.

### Usage

1.  Open `esp32_c3_oled_example.ino` in the Arduino IDE.
2.  Connect your ESP32-C3 board via USB-C.
3.  Select the correct COM port.
4.  Click **Upload**.

## Pinout Reference

| OLED Pin | ESP32-C3 Pin |
| :------- | :----------- |
| SDA      | GPIO 5       |
| SCL      | GPIO 6       |
| VCC      | 3.3V         |
| GND      | GND          |
