#include "Hardware.h"


Hardware::Hardware() {

}



void Hardware::init() {
  DDRD &= ~( (1 << PD2) | (1 << PD3) );  //Switchs
  PORTD |= (1 << PD2) | (1 << PD3); //Pull-Ups en Switchs

  DDRD |= (1 << PD4) | (1 << PD5) | (1 << PD6) | (1 << PD7);  //Relays + Leds
  PORTD |= (1 << PD4) | (1 << PD5); //Relays Off
  PORTD &= ~( (1 << PD6) | (1 << PD7) ); //Leds Off
}



void Hardware::setRelay(uint8_t i, uint8_t state) {
  if (state)
    PORTD &= ~(1 << (i == 0) ? PD4 : PD5);
  else
    PORTD |= (1 << (i == 0) ? PD4 : PD5);
}


void Hardware::setAllRelay(uint8_t state) {
  if (state)
    PORTD &= ~((1 << PD4) | (1 << PD5));
  else
    PORTD |= (1 << PD4) | (1 << PD5);
}



void Hardware::setLed(var_color_led color, uint8_t state) {
  if (state)
    PORTD |= (1 << ((color == ROJO) ? PD7 : PD6));
  else
    PORTD &= ~(1 << ((color == ROJO) ? PD7 : PD6));
}


void Hardware::toggleLed(var_color_led color){
  PORTD ^= (1 << ((color == ROJO) ? PD7 : PD6));
}



uint8_t Hardware::getButton(var_switch i){
  if(i == SW1){
    return(!(PIND & (1 << PD2)));
  } else {
    return(!(PIND & (1 << PD3)));
  }
}
