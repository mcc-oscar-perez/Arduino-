/*
* Autor: Oscar Kevin
* Fecha:  09/12/25
* versión: 0.1
* Copyright: Explora. Este formato esta sujeto a las disposicicones aplicables en materia de propiedad intelectual.
* Contacto: oskr-75@hotmail.com 
* Cambios por: None
* Correciones por: None
*/


const int trig = 9;
const int echo = 10;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

}

void loop() {

  long duration = 0;
  long distance = 0;

// inicio en apagado
  digitalWrite(trig, LOW);
  delay(150);

  // Mandamos un pulso de 10 microsegundos
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH, 30000);
  distance = (duration * 0.034 )/ 2;

  Serial.print("Distancia: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500);

}
