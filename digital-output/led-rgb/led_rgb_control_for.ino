// Definimos los pines para los colores del LED RGB
int redPin = 9;
int bluePin = 10;
int greenPin = 11;

// Array que contiene los pines del LED RGB
int ledRGB[] = {redPin, bluePin, greenPin};

void setup() {
  // Configuramos los pines del LED RGB como salida
  for (int i = 0; i < 3; i++) {
    pinMode(ledRGB[i], OUTPUT);
  }
}

void loop() {
  // Encendemos cada color (rojo, verde y azul) uno por uno
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledRGB[i], HIGH);  // Encender el color actual
    delay(1000);  // Esperamos 1 segundo
    digitalWrite(ledRGB[i], LOW);   // Apagar el color actual
  }
}

