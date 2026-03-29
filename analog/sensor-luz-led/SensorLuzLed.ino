int sensorLuz = A1;   // Pin del sensor de luz
int ledPin = 13;       // Pin del LED
int valorLuz = 0;     // Variable para almacenar el valor de luz
int umbralLuz = 500;  // Umbral para decidir cuándo encender el LED

void setup() {
  Serial.begin(9600);      // Iniciar comunicación serial
  pinMode(sensorLuz, INPUT);  // Configurar el sensor de luz como entrada
  pinMode(ledPin, OUTPUT);    // Configurar el LED como salida
}

void loop() {
  // Leer el valor del sensor de luz
  valorLuz = analogRead(sensorLuz);

  // Imprimir el valor en el monitor serie
  Serial.print("Valor de la luz: ");
  Serial.println(valorLuz);

  // Si el valor de luz es menor que el umbral, encender el LED
  if (valorLuz < umbralLuz) {
    digitalWrite(ledPin, LOW);  // Apagar el LED
  } else {
    digitalWrite(ledPin, HIGH);   // Encender el LED
  }

  delay(250);  // Pausa de 250ms
}
