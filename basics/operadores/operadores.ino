int a = 10;
int b = 5;
int suma;
int resta;
int multiplicacion;
int division;
boolean comparacion;

void setup() {
  // Inicializamos la comunicación serial para ver los resultados
  Serial.begin(9600);

  // Operadores aritméticos
  suma = a + b;              // Suma
  resta = a - b;             // Resta
  multiplicacion = a * b;    // Multiplicación
  division = a / b;          // División

  // Mostramos los resultados de los operadores aritméticos
  Serial.println("---- Operadores Aritméticos ----");
  Serial.print("Suma (a + b): ");
  Serial.println(suma);

  Serial.print("Resta (a - b): ");
  Serial.println(resta);

  Serial.print("Multiplicación (a * b): ");
  Serial.println(multiplicacion);

  Serial.print("División (a / b): ");
  Serial.println(division);

  // Operadores de comparación
  comparacion = (a > b);     // Comparación: ¿es 'a' mayor que 'b'?
  Serial.println("---- Operadores de Comparación ----");
  Serial.print("¿Es a mayor que b? (a > b): ");
  if (comparacion) {
    Serial.println("Sí");
  } else {
    Serial.println("No");
  }

  comparacion = (a == b);    // Comparación: ¿son 'a' y 'b' iguales?
  Serial.print("¿Son a y b iguales? (a == b): ");
  if (comparacion) {
    Serial.println("Sí");
  } else {
    Serial.println("No");
  }
}

void loop() {
  // El bucle está vacío, ya que los cálculos solo se muestran una vez
}
