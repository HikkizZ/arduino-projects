int sensorLuz = A1;    // Pin del sensor de luz
int ledPin = 12;       // Pin del LED
int buzzerPin = 5;     // Pin del buzzer
int valorLuz = 0;      // Variable para almacenar el valor de luz
int umbralLuz = 500;   // Umbral para decidir cuándo encender el LED

void setup() {
  Serial.begin(9600);      // Iniciar comunicación serial
  pinMode(sensorLuz, INPUT);  // Configurar el sensor de luz como entrada
  pinMode(ledPin, OUTPUT);    // Configurar el LED como salida
  pinMode(buzzerPin, OUTPUT); // Configurar el buzzer como salida
}

void loop() {
  // Leer el valor del sensor de luz
  valorLuz = analogRead(sensorLuz);

  // Imprimir el valor en el monitor serie
  Serial.print("Valor de la luz: ");
  Serial.println(valorLuz);

  // Si el valor de luz es menor que el umbral, apagar el LED y el buzzer
  if (valorLuz < umbralLuz) {
    digitalWrite(ledPin, LOW);  // Apagar el LED
    noTone(buzzerPin);          // Apagar el buzzer
  } else {
    // Si hay suficiente luz, encender el LED y el buzzer
    digitalWrite(ledPin, HIGH); // Encender el LED
    tone(buzzerPin, 1000);      // Encender el buzzer con una frecuencia de 1000 Hz
  }

  delay(250);  // Pausa de 250ms
}
