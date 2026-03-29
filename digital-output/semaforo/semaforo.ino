// Definimos los pines para los colores del LED RGB
int redPin = 9;
int bluePin = 10;
int greenPin = 11;

void setup() {
  // Configuramos los pines del LED RGB como salida
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // Fase 1: Rojo (el semáforo está en rojo)
  digitalWrite(redPin, HIGH);  // Encender luz roja
  digitalWrite(greenPin, LOW); // Apagar luz verde
  digitalWrite(bluePin, LOW);  // Apagar luz azul
  delay(5000);  // Mantener luz roja encendida por 5 segundos

  // Fase 2: Verde (el semáforo está en verde)
  digitalWrite(redPin, LOW);   // Apagar luz roja
  digitalWrite(greenPin, HIGH); // Encender luz verde
  digitalWrite(bluePin, LOW);  // Apagar luz azul
  delay(5000);  // Mantener luz verde encendida por 5 segundos

  // Fase 3: Amarillo (rojo + verde)
  digitalWrite(greenPin, HIGH);  // Encender luz verde
  digitalWrite(redPin, HIGH);    // Encender luz roja (para hacer amarillo)
  digitalWrite(bluePin, LOW);    // Apagar luz azul
  delay(2000);  // Mantener luz amarilla encendida por 2 segundos
}

/*
Control de leds con botones (If-else)
2. Control de brillo de LED con el potenciómetro (variables, analogWrite)
3. Secuencia de luces (for, delay)
4. Control de un zumbador con una nota musical (while, variables)
5. Detector de luz con el sensor LDR (if-else, analogRead)
*/
