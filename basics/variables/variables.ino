int numeroEntero = 10;      // Variable de tipo int
float numeroDecimal = 5.5;  // Variable de tipo float
boolean esVerdadero = true; // Variable de tipo boolean
char letra = 'A';           // Variable de tipo char

void setup() {
  // Inicializamos la comunicación serial para ver los resultados
  Serial.begin(9600);

  // Mostramos el valor de cada variable en el monitor serial
  Serial.println("---- Ejemplo de uso de variables en Arduino ----");

  // Mostrar variable int
  Serial.print("Valor de la variable entera (int): ");
  Serial.println(numeroEntero);

  // Mostrar variable float
  Serial.print("Valor de la variable decimal (float): ");
  Serial.println(numeroDecimal);

  // Mostrar variable boolean
  Serial.print("Valor de la variable booleana (boolean): ");
  if (esVerdadero) {
    Serial.println("Verdadero");
  } else {
    Serial.println("Falso");
  }

  // Mostrar variable char
  Serial.print("Valor de la variable de caracter (char): ");
  Serial.println(letra);
}

void loop() {
  // El bucle no hará nada en este ejemplo
}

