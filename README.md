<h1 align="center">ESP12 - QNAP<br/><br/>
<div align="center">
<img src="docs/leme.png" style="max-width: 100%" width=200><br/><br/>


![GitHub last commit](https://img.shields.io/github/last-commit/christian-herrera/doble-relay-leme)
![Static Badge](https://img.shields.io/badge/version-v1.0.0-blue)


![GitHub License](https://img.shields.io/github/license/christian-herrera/esp12-leme?style=for-the-badge)
![Static Badge](https://img.shields.io/badge/ARDUINO-%2300878F?style=for-the-badge&logo=arduino&logoSize=auto)


</div></h1>

# Breve Descripción
Se utiliza el ZIP que se descarga de GitHub para importarla como una biblioteca en el Ide de arduino.
Los ejemplos incluidos permiten ver el uso de las funciones que se incluyen en la clase Hardware.

## Parametros de las Funciones
Se tiene la siguiente definicion en el archivo `Hardware.h`:
```c
enum var_color_led { ROJO, VERDE };
enum var_switch { SW1, SW2 };
```
Las cuales son esperadas como parametro por las funciones `setLed()` y `getButton()`.
