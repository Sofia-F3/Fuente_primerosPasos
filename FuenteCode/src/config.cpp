#include "config.h"

Adafruit_SSD1306 pantallita(128, 64, &Wire, -1);

float sensibilidad = 0.066;

void iniciarPantalla(void) {
    if(!pantallita.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
        Serial.println(F("Fallo al asignar SSD1306"));
        Serial.println("AAAAAAAAAAAAAAAAAAAAAA");
        for(;;);
  }
}

float leerCorriente(void) {
    return ((analogRead(corriente) * (5.0000 /1023.0000) - 2.500) / sensibilidad);
}

float leerVoltaje(void) {
    int lectura = analogRead(A0);

    float voltajeA0 = lectura * (5.0 / 1023.0);

    float voltajeFuente = voltajeA0 * 3.2;

    return voltajeFuente;

}