/*
* Autor: Oscar Kevin
* Fecha:  09/12/25
* versión: 0.1
* Copyright: Explora. Este formato esta sujeto a las disposicicones aplicables en materia de propiedad intelectual.
* Contacto: oskr-75@hotmail.com 
* Cambios por: None
* Correciones por: None
*/


// Pines
#define sensorPin  A0     // Sensor de nivel
#define ledRojo    2
#define ledVerde   3
#define ledAzul    4
#define relePin    5

void setup() {
  Serial.begin(9600);

  pinMode(ledRojo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAzul, OUTPUT);
  pinMode(relePin, OUTPUT);

  digitalWrite(relePin, LOW);  // Relevador apagado al inicio
  
}

void loop() {
  int valor = analogRead(sensorPin);
  Serial.println(valor);

  // Apagar todos los LEDs antes de decidir
  digitalWrite(ledRojo, LOW);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAzul, LOW);
  digitalWrite(relePin, LOW);
 
 // Nivel bajo
  if (valor < 350) 
  {
    digitalWrite(ledRojo, HIGH);

  } else if (valor >= 350 && valor <= 550)  // Nivel medio
    {
    digitalWrite(ledVerde, HIGH);

    }else if (valor > 550) // Nivel alto
     {  
      digitalWrite(ledAzul, HIGH);
      digitalWrite(relePin, HIGH);  // Activa el relevador
     }

  delay(200);
}
