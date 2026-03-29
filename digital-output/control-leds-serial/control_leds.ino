int ledPin12 = 12;  // LED en el pin 12
int ledPin13 = 13;  // LED en el pin 13
char inputData;     // Variable para almacenar el dato ingresado

void setup() {
  // Configuramos los pines 12 y 13 como salidas
  pinMode(ledPin12, OUTPUT);
  pinMode(ledPin13, OUTPUT);

  // Iniciamos la comunicación serial
  Serial.begin(9600);
  // Enviamos un mensaje inicial para guiar al usuario
  Serial.println("Ingrese 1 para encender el LED en el pin 12 o 2 para encender el LED en el pin 13.");
}

void loop() {
  // Verificamos si hay datos disponibles en el monitor serial
  if (Serial.available() > 0) {
    // Leemos el dato ingresado por el usuario
    inputData = Serial.read();

    // Ignorar caracteres no visibles como retorno de carro (carácter 13) o nueva línea (carácter 10)
    if (inputData == '\n' || inputData == '\r') {
      return;  // No hacer nada si se recibe un salto de línea o retorno de carro
    }

    // Verificamos si el dato ingresado es un número entre '0' y '9'
    if (inputData >= '0' && inputData <= '9') {
      // Si el usuario ingresa '1', encendemos el LED del pin 12
      if (inputData == '1') {
        digitalWrite(ledPin12, HIGH);  // Encender LED en el pin 12
        digitalWrite(ledPin13, LOW);   // Apagar LED en el pin 13, si está encendido
        Serial.println("LED Rojo encendido.");
      }
      // Si el usuario ingresa '2', encendemos el LED del pin 13
      else if (inputData == '2') {
        digitalWrite(ledPin13, HIGH);  // Encender LED en el pin 13
        digitalWrite(ledPin12, LOW);   // Apagar LED en el pin 12, si está encendido
        Serial.println("LED Azul encendido.");
      }
      // Si se ingresa otro número distinto de '1' o '2'
      else {
        Serial.println("Número no válido. Ingrese 1 o 2.");
      }
    } 
    // Si el dato ingresado no es un número, mostramos un mensaje de error
    else {
      Serial.println("Entrada no válida. Solo se permiten números.");
    }
  }
}
