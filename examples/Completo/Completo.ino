#include <Hardware.h>
Hardware hw;

void setup() {
  hw.init();
}

void loop() {
  hw.setRelay(0,1);
  hw.setLed(VERDE, 1);
  hw.setRelay(1,1);
  hw.setLed(ROJO, 1);

  delay(1000);
  hw.setAllRelay(0);
  hw.toggleLed(ROJO);
  hw.toggleLed(VERDE);
  delay(2000);
}