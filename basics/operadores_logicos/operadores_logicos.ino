int numero1 = 10;
int numero2 = 5;
int numero3 = 7;

void setup() {
  // Iniciamos la comunicación serial para ver los resultados
  Serial.begin(9600);

  Serial.println("---- Ejemplo de operadores lógicos ----");

  // Operador AND (&&)
  Serial.print("¿Es el numero 10 mayor que 5 y mayor que 7? ");
  if (numero1 > numero2 && numero1 > numero2) {
    Serial.println("Sí"); 
  } else {
    Serial.println("No");
  }

  // Operador OR (||)
  Serial.print("¿Es el numero 10 menor que 5 o mayor que 7? ");
  if (numero1 < numero2 || numero1 > numero3) {
    Serial.println("Sí");
  } else {
    Serial.println("No");
  }

  // Operador NOT (!) - Negación lógica
  Serial.println("Ejemplo de NOT (!)");
  if (!(numero1 > numero2)) {  // Niega la afirmación de que 10 es mayor que 20
    Serial.println("¿10 es mayor que 5? Verdadero");
  } else {
    Serial.println("¿10 es mayor que 5? Falso");
  }
}

void loop() {
  // El loop está vacío ya que las condiciones solo se verifican una vez
}
