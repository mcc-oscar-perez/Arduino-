/*
* Autor: Oscar Kevin
* Fecha:  04/12/25
* versión: 0.1
* Copyright: Explora. Este formato esta sujeto a las disposicicones aplicables en materia de propiedad intelectual.
* Contacto: oskr-75@hotmail.com 
* Cambios por: None
* Correciones por: None
*/

// #define PIN_DIGITAL_13 13
// #define RETARDO 250


// void setup() 
// {
//   pinMode(PIN_DIGITAL_13,OUTPUT);
 
// }

// void loop() 
// {

//  digitalWrite(PIN_DIGITAL_13, HIGH);
//  delay(RETARDO);
//  digitalWrite(PIN_DIGITAL_13, LOW);
//  delay(RETARDO);

// }


#define PIN_DIGITAL_13 13
#define PIN_DIGITAL_12 12
#define PIN_DIGITAL_11 11
#define RETARDO 3000
#define RETARDO1 2000
#define RETARDO2 333

void setup() 
{
  pinMode(PIN_DIGITAL_13,OUTPUT);
  pinMode(PIN_DIGITAL_12,OUTPUT);
  pinMode(PIN_DIGITAL_11,OUTPUT);
}

 void loop()
 
 {
// led verde
digitalWrite(PIN_DIGITAL_13, HIGH);
delay(RETARDO);
digitalWrite(PIN_DIGITAL_13, LOW);
delay(RETARDO2);

//1 
digitalWrite(PIN_DIGITAL_13, HIGH);
delay(RETARDO2);
digitalWrite(PIN_DIGITAL_13, LOW);
delay(RETARDO2);

//2
digitalWrite(PIN_DIGITAL_13, HIGH);
delay(RETARDO2);
digitalWrite(PIN_DIGITAL_13, LOW);
delay(RETARDO2);

//3 
digitalWrite(PIN_DIGITAL_13, HIGH);
delay(RETARDO2);
digitalWrite(PIN_DIGITAL_13, LOW);
delay(RETARDO2);


// led amarillo
digitalWrite(PIN_DIGITAL_12, HIGH);
delay(RETARDO1);
digitalWrite(PIN_DIGITAL_12, LOW);

// led rojo
digitalWrite(PIN_DIGITAL_11, HIGH);
delay(RETARDO);
digitalWrite(PIN_DIGITAL_11, LOW);

} 




