// Pines conectados a los segmentos a, b, c, d, e, f, g
const int segmentPins[] = {2, 3, 4, 5, 6, 7, 8};

// Matriz para definir qué segmentos encender para cada número (0 a 9)
// Cada fila representa un número; cada columna un segmento (a-g).
const bool digitMatrix[10][7] = {
  {1, 1, 1, 1, 1, 1, 0}, // 0
  {0, 1, 1, 0, 0, 0, 0}, // 1
  {1, 1, 0, 1, 1, 0, 1}, // 2
  {1, 1, 1, 1, 0, 0, 1}, // 3
  {0, 1, 1, 0, 0, 1, 1}, // 4
  {1, 0, 1, 1, 0, 1, 1}, // 5
  {1, 0, 1, 1, 1, 1, 1}, // 6
  {1, 1, 1, 0, 0, 0, 0}, // 7
  {1, 1, 1, 1, 1, 1, 1}, // 8
  {1, 1, 1, 1, 0, 1, 1}  // 9
};

void setup() {
  // Configurar todos los pines de los segmentos como salida
  for (int i = 0; i < 7; i++) {
    pinMode(segmentPins[i], OUTPUT);
  }
}

void loop() {
  // Mostrar los números del 0 al 9
  for (int number = 0; number < 10; number++) {
    displayNumber(number); // Mostrar el número actual
    delay(500);           // Esperar 1 segundo
  }
}

void displayNumber(int number) {
  // Recorrer los segmentos (a, b, c, d, e, f, g)
  for (int i = 0; i < 7; i++) {
    digitalWrite(segmentPins[i], digitMatrix[number][i]); // Encender/apagar segmentos
  }
}
