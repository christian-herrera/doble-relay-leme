#ifndef HARDWARE_H
#define HARDWARE_H

#include <avr/io.h>

enum var_color_led { ROJO, VERDE };
enum var_switch { SW1, SW2 };

class Hardware {
  public:
    Hardware();

    void init();

    void setRelay(uint8_t i, uint8_t state);
    void setAllRelay(uint8_t state);

    void setLed(var_color_led color, uint8_t state);
    void toggleLed(var_color_led color);


    uint8_t getButton(var_switch i);
  private:
};


#endif
