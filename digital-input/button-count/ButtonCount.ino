int botonPin = 2;   // Pin del botón
int contador = 0;   // Variable para el contador

void setup() {
  Serial.begin(9600);         // Iniciar comunicación serial
  pinMode(botonPin, INPUT);   // Configurar el botón como entrada
}

void loop() {
  // Leer el estado del botón
  int estadoBoton = digitalRead(botonPin);

  // Si el botón está presionado
  if (estadoBoton == HIGH) {
    // Incrementar el contador
    contador++;
    Serial.print("Contador: ");
    Serial.println(contador);

    // Esperar a que se suelte el botón para evitar múltiples incrementos
    while (digitalRead(botonPin) == HIGH) {
      // No hacer nada, solo esperar a que el botón sea soltado
    }
  }

  delay(50);  // Pequeña pausa para evitar rebotes
}
