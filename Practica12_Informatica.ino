/*
 * Esto es una practica del encendido y apagado de dos LEDs mas una bombilla, activandose de forma secuencial con intervalos definidos.
 * Autor: Mauro Fernandez 
 * Data: 17/12/2024
*/

// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH); // Se enciende el PIN 13
  delay(10000); // Wait for 10000 millisecond(s) // Espera 10 segundos
  digitalWrite(13, LOW);// Se apaga el PIN 13
  delay(4000); // Wait for 4000 millisecond(s) // Espera 4 segundos 
  digitalWrite(12, HIGH); // Se enciende el PIN 12
  digitalWrite(11, HIGH); // Se enciende el PIN 11
  delay(10000); // Wait for 10000 millisecond(s) // Espera 10 segundos
  digitalWrite(12, LOW); // Se apaga el PIN 12
  digitalWrite(11, LOW); // Se apaga el PIN 11
  delay(4000); // Wait for 4000 millisecond(s) // Espera 4 segundos
}
