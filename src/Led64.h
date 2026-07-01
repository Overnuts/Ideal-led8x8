#ifndef LED64_H
#define LED64_H

#include <Adafruit_NeoPixel.h>

class Led64 {
public:
    /**
     * @brief Construct a new Led64 object for an 8x8 WS2812 matrix
     *
     * @param pin The GPIO pin connected to the matrix DI
     */
    Led64(int16_t pin);

    /**
     * @brief Initialize the matrix
     */
    void begin();

    /**
     * @brief Display a smiley face icon
     */
    void smiley();

    /**
     * @brief Display a battery icon
     */
    void battery();

    /**
     * @brief Display a sun icon
     */
    void sun();

    /**
     * @brief Display a moon icon
     */
    void moon();

    /**
     * @brief Display a warning (triangle) icon
     */
    void warning();

    /**
     * @brief Display a wifi lost (X over signal) icon
     */
    void wifiLost();

    /**
     * @brief Clear the matrix (all LEDs off)
     */
    void clear();

private:
    Adafruit_NeoPixel _pixels;
    void _displayBitmap(const uint32_t bitmap[64]);
};

#endif
