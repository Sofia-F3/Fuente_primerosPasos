#include <Arduino.h>
#include "aplicacion.h"

Adafruit_SSD1306 display(128, 64, &Wire, -1);

void setup() {
  Serial.begin(9600);
  
  // Inicializar pantalla en dirección I2C 0x3C
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("Fallo al asignar SSD1306"));
    for(;;);
  }
  
  display.clearDisplay(); // Limpiar buffer
  display.setTextSize(1); // Tamaño de texto
  display.setTextColor(SSD1306_WHITE); // Color blanco
  display.setCursor(0, 0); // Posición inicial (x, y)
  display.print(F("Hola, Arduino!"));
  
  display.display(); // Mostrar en pantalla
}

void loop() {
}

