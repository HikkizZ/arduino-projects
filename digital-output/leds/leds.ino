// Definimos los pines para los LEDs
int ledPin12 = 12;
int ledPin13 = 13;

void setup() {
  // Configuramos los pines 12 y 13 como salida
  pinMode(ledPin12, OUTPUT);
  pinMode(ledPin13, OUTPUT);
}

void loop() {
  // Encendemos el LED en el pin 12 y apagamos el LED en el pin 13
  digitalWrite(ledPin12, HIGH);
  digitalWrite(ledPin13, LOW);
  delay(1000); // Esperamos 1 segundo

  // Apagamos el LED en el pin 12 y encendemos el LED en el pin 13
  digitalWrite(ledPin12, LOW);
  digitalWrite(ledPin13, HIGH);
  delay(1000); // Esperamos 1 segundo
}
