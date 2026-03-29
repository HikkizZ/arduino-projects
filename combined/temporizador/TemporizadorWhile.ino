int ledPin = 12;      // Pin del LED
int buzzerPin = 5;    // Pin del buzzer
int tiempo = 10;      // Tiempo en segundos para el temporizador

void setup() {
  pinMode(ledPin, OUTPUT);    // Configurar el LED como salida
  pinMode(buzzerPin, OUTPUT); // Configurar el buzzer como salida
  Serial.begin(9600);         // Iniciar comunicación serial
}

void loop() {
  // Mostrar el tiempo inicial en el monitor serie
  Serial.print("Iniciando temporizador: ");
  Serial.print(tiempo);
  Serial.println(" segundos");

  while (tiempo > 0) {
    digitalWrite(ledPin, HIGH); 
    delay(500);                 
    digitalWrite(ledPin, LOW);  
    delay(500);                 

    tiempo--;

    Serial.print("Tiempo restante: ");
    Serial.println(tiempo);
  }

  // Cuando el temporizador llega a cero, activar el buzzer
  Serial.println("¡Tiempo finalizado!");
  tone(buzzerPin, 1000); // Encender el buzzer con una frecuencia de 1000 Hz
  delay(2000);           // Mantener el buzzer encendido por 2 segundos
  noTone(buzzerPin);     // Apagar el buzzer

  // Esperar a que el usuario escriba "1" en el monitor serie para reiniciar
  Serial.println("Escribe '1' en el monitor serie para reiniciar el temporizador.");

  while (true) {
    // Verificar si hay datos disponibles en el monitor serie
    if (Serial.available() > 0) {
      int input = Serial.parseInt(); // Leer el número ingresado
      if (input == 1) {
        // Reiniciar el temporizador
        tiempo = 10;
        break; // Salir del bucle infinito para reiniciar el temporizador
      }
    }
  }
}




