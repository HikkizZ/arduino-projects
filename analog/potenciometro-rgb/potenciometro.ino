int redPin = 9;    // Pin del LED rojo
int bluePin = 10;  // Pin del LED azul
int greenPin = 11; // Pin del LED verde
int potPin = A0;   // Pin del potenciómetro

int potValue = 0;  // Variable para almacenar el valor del potenciómetro

void setup() {
  Serial.begin(115200);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  potValue = analogRead(potPin);  // Leer el valor del potenciómetro

  // Cambiar color basado en el valor del potenciómetro
  // int redValue = map(potValue, 0, 1023, 0, 255);
  int greenValue = map(potValue, 0, 1023, 255, 0);  
  int blueValue = map(potValue, 0, 1023, 0, 255);

  // Escribir valores en los pines del LED RGB
  // analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
  Serial.print("Valor del potenciometro: ");
  Serial.println(potValue);
  delay(10);  // Pequeña pausa para suavizar las lecturas
}
