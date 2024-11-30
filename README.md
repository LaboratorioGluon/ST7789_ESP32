# ST7789 + ESP32 + Platformio + TFT_eSPI

# Configuration

Initialize platformio to download the TFT_eSPI library

Modify `include/User_Setup.h` lines 213-218, and the **move** the `User_Setup.h` to `.pio/libdeps/TFT_eSPI/`

Compile and flash.