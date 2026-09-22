#include <Arduino.h>

#include "config.h"

// Componentes: Pantsallita

void setup() {
  Serial.begin(9600);
  Serial.println("hola");

  iniciarPantalla();

  pantallita.clearDisplay();
  pantallita.setTextSize(1);
  pantallita.setTextColor(SSD1306_WHITE);
  pantallita.setCursor(0, 0);
}

void loop() {
  pantallita.display();
  leerCorriente();
  float voltajeLEc = leerVoltaje();

  Serial.print("Voltaje: ");
  Serial.print(voltajeLEc, 2);
  Serial.println(" V");
  pantallita.setCursor(0, 0);
  pantallita.print(analogRead(voltaje));
}
