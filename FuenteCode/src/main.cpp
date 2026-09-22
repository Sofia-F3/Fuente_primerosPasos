#include <Arduino.h>
#include "config.h"

void setup() {
  Serial.begin(9600);
  Serial.println("hola");

  if(!pantallita.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("Fallo al asignar SSD1306"));
    Serial.println("enrtre23");
    for(;;);
  }

  pantallita.clearDisplay(); // Limpiar buffer
  pantallita.setTextSize(1); // Tamaño de texto
  pantallita.setTextColor(SSD1306_WHITE); // Color blanco
  pantallita.setCursor(0, 0); // Posición inicial (x, y)
    pantallita.print("Hola");
  
}

void loop() {
  pantallita.display();
}

