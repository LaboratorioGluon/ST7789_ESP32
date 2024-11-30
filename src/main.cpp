#include <Arduino.h>
#include <TFT_eSPI.h> // Biblioteca TFT_eSPI

TFT_eSPI tft = TFT_eSPI(); // Instancia del objeto TFT

void setup() {
  Serial.begin(115200);

  tft.init();               // Inicializa la pantalla
  tft.setRotation(1);       // Configura la orientación (ajusta según tu montaje)
  tft.fillScreen(TFT_BLACK); // Rellena la pantalla de negro

  // Dibuja un círculo
  tft.fillCircle(120, 120, 50, TFT_RED);

  // Escribe texto en la pantalla
  tft.setTextColor(TFT_WHITE, TFT_BLACK); // Texto blanco con fondo negro
  tft.setTextSize(2);                     // Tamaño del texto
  tft.setCursor(50, 200);                 // Posición inicial del cursor
  tft.print("Hola @david_wiki");
}

void loop() {
  // Nada en el loop para este ejemplo
}
