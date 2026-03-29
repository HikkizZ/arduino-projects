int led1 = 12;  // Pin del LED 12
int led2 = 13;  // Pin del LED 13
int buttonPin1 = 2;  // Pin del botón 2
int buttonPin2 = 3;  // Pin del botón 3
int buzzer = 5;
int buttonState1 = 0;  // Estado del botón 2
int buttonState2 = 0;  // Estado del botón 3

void setup() {
  pinMode(led1, OUTPUT);  // Configurar LED 12 como salida
  pinMode(led2, OUTPUT);  // Configurar LED 13 como salida
  pinMode(buzzer, OUTPUT);
  pinMode(buttonPin1, INPUT);  // Configurar botón 2 como entrada
  pinMode(buttonPin2, INPUT);  // Configurar botón 3 como entrada
}

void loop() {
  buttonState1 = digitalRead(buttonPin1);  // Leer estado del botón 2
  buttonState2 = digitalRead(buttonPin2);  // Leer estado del botón 3

  if (buttonState1 == LOW) {
    // Si el botón 2 está presionado
    digitalWrite(buzzer, HIGH);
    digitalWrite(led1, LOW);  // Apagar LED 12
    digitalWrite(led2, HIGH);  // Encender LED 13
  } else if (buttonState2 == LOW) {
    // Si el botón 3 está presionado
    digitalWrite(led1, HIGH);  // Encender LED 12
    digitalWrite(led2, LOW);  // Apagar LED 13
  }
}

