const int potPin = A0;    // Potenciómetro conectado a A0
const int buzzerPin = 5;  // Buzzer conectado a D5
const int redPin = 9;     // Componente rojo del LED RGB conectado a D9
const int bluePin = 10;   // Componente azul del LED RGB conectado a D10
const int greenPin = 11;  // Componente verde del LED RGB conectado a D11
int valorPot = 0;         // Variable para almacenar el valor del potenciómetro

void setup() {
  pinMode(potPin, INPUT);      // Configuramos el potenciómetro como entrada
  pinMode(buzzerPin, OUTPUT);  // Configuramos el buzzer como salida
  pinMode(redPin, OUTPUT);     // Configuramos el LED RGB como salida
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  Serial.begin(115200);  // Iniciamos la comunicación serie
}

void loop() {
  valorPot = analogRead(potPin);  // Leemos el valor del potenciómetro
  int rango = valorPot / 256;     // Dividimos en 4 rangos (0-1023 → 0-3)

  Serial.print("Valor del potenciómetro: ");
  Serial.println(valorPot);

  if (valorPot == 0) {  // Si el potenciómetro está exactamente en 0
    noTone(buzzerPin);  // Apagar el buzzer
    setColor(0, 0, 0);  // Apagar el LED RGB
    Serial.println("Potenciómetro en 0: Buzzer apagado. LED apagado.");
  } else {  // Usar el switch case para otros valores
    // Cambiamos el tono del buzzer y el color del LED RGB según el rango
    switch (rango) {
      case 0:
        tone(buzzerPin, 500);   // Bajo: 500 Hz
        setColor(255, 0, 0);  // Rojo
        Serial.println("Tono bajo: 500 Hz. Color: Rojo.");
        break;
      case 1:
        tone(buzzerPin, 1000);  // Medio-bajo: 1000 Hz
        setColor(0, 255, 0);  // Verde
        Serial.println("Tono medio-bajo: 1000 Hz. Color: Verde.");
        break;
      case 2:
        tone(buzzerPin, 1500);  // Medio-alto: 1500 Hz
        setColor(0, 0, 255);  // Azul
        Serial.println("Tono medio-alto: 1500 Hz. Color: Azul.");
        break;
      case 3:
        tone(buzzerPin, 2000);  // Alto: 2000 Hz
        setColor(255, 255, 0);  // Amarillo
        Serial.println("Tono alto: 2000 Hz. Color: Amarillo.");
        break;
      default:
        noTone(buzzerPin);      // Sin tono
        setColor(0, 0, 0);  // Apagado
        Serial.println("Valor fuera de rango: Buzzer apagado. LED apagado.");
        break;
    }
  }
  delay(10);  // Pausa antes de la siguiente lectura
}

// Función para controlar el color del LED RGB
void setColor(int red, int green, int blue) {
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);
}
