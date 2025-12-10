/*
* Autor: Oscar Kevin
* Fecha:  09/12/25
* versión: 0.1
* Copyright: Explora. Este formato esta sujeto a las disposicicones aplicables en materia de propiedad intelectual.
* Contacto: oskr-75@hotmail.com 
* Cambios por: None
* Correciones por: None
*/

#define led1 13
#define led2 12  // LEDS
#define led3 11

#define buzzerActivo  7
#define buzzerPasivo  6   //BUZZER

#define trig 9
#define echo 10  // SENSOR



void setup() {

  Serial.begin(9600);

  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);


  pinMode(buzzerActivo, OUTPUT);
  pinMode(buzzerPasivo, OUTPUT);

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

  
  if(distance >= 50)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(buzzerActivo,LOW);
  }else{
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    digitalWrite(buzzerActivo,HIGH);
  }if(distance <= 20)
  { 
   digitalWrite(led3,HIGH);
   digitalWrite(led1,LOW);
   digitalWrite(led2,LOW);
   digitalWrite(buzzerActivo,HIGH);
  }else{
    digitalWrite(led3,LOW);
    digitalWrite(buzzerActivo,LOW);
  }

  
}
