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

### PlatformIO (Recommended)

1.  Install the **PlatformIO IDE** extension in VS Code.
2.  Open this project folder in VS Code.
3.  PlatformIO will automatically download the necessary platforms and libraries (U8g2).
4.  Connect your ESP32-C3 board via USB-C.
5.  Click the **Upload** button (check icon) in the PlatformIO toolbar.

### Arduino IDE

1.  **Install ESP32 Board Support:**
    - Go to **File > Preferences**.
    - Add `https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json` to the **Additional Board Manager URLs**.
    - Go to **Tools > Board > Boards Manager**, search for `esp32`, and install the latest version.
    - Select **ESP32C3 Dev Module** from the board list.

2.  **Install U8g2 Library:**
    - Go to **Sketch > Include Library > Manage Libraries...**.
    - Search for `U8g2` and install the library by Oliver.

3.  **Usage:**
    - Open `src/main.cpp`.
    - Note: You may need to rename it back to `.ino` or create a new sketch and copy the content if using older Arduino IDE versions.
    - Connect board and click **Upload**.

## Pinout Reference

| OLED Pin | ESP32-C3 Pin |
| :------- | :----------- |
| SDA      | GPIO 5       |
| SCL      | GPIO 6       |
| VCC      | 3.3V         |
| GND      | GND          |
