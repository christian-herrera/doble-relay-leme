/*
*  Ejemplo de uso de los switches y los relays.
*   Con la pulsación del switch 1 se activa el relay 1 y se desactiva el relay 2.
*   Con la pulsación del switch 2 se activa el relay 2 y se desactiva el relay 1.
*   Se debera dejar de presionar el switch para poder presionar el otro.
*/

#include <Hardware.h>
Hardware hw;

void setup() {
  hw.init();
}

void loop() {
  if(hw.getButton(SW1)){
    hw.setAllRelay(1);
    hw.setLed(ROJO, 1);
    hw.setLed(VERDE, 0);
    delay(100);

    while(hw.getButton(SW1)){
      delay(1);
    }
  }

  if(hw.getButton(SW2)){
    hw.setAllRelay(0);
    hw.setLed(ROJO, 0);
    hw.setLed(VERDE, 1);
    delay(100);

    while(hw.getButton(SW2)){
      delay(1);
    }
  }
}