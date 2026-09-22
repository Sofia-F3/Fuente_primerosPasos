#ifndef CONFIG_H
#define CONFIG_H

#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_SSD1306.h>

#define corriente A1
#define voltaje A0
#define SCL A5
#define SDA A4

extern Adafruit_SSD1306 pantallita;
void iniciarPantalla(void);
float leerCorriente(void);
float leerVoltaje(void);

#endif