/*
* Autor: Oscar Kevin
* Fecha:  09/12/25
* versión: 0.1
* Copyright: Explora. Este formato esta sujeto a las disposicicones aplicables en materia de propiedad intelectual.
* Contacto: oskr-75@hotmail.com 
* Cambios por: None
* Correciones por: None
*/


// Encendido y apagado de un boton 

const int buttonPin = 2;
const int ledPin = 13;

bool ledState = false; // Estado inicial del led
bool ButtonState = LOW; // Estado inicial del boton
bool lastReading = LOW; // ultima lectura del pin 

unsigned long  lastDebounceTime = 0;
const unsigned long  debounceDelay = 10 ; // Delay de 50ms


void setup() 
{
 pinMode(buttonPin,INPUT);  // Establecemos si los pines son de entrada o salida (entrada) 
 pinMode(ledPin,OUTPUT);  // (salida)
 digitalWrite(ledPin,ledState);
}

void loop() 
{
 int reading = digitalRead(buttonPin);

 // Antirrebote
 // comparamos la señal del pin de entrada con el tiempo del boton 
 if(reading != lastReading)
 {
  lastDebounceTime = millis();
 }

 // si ya paso el tiempo de debounce 
 if((millis()-lastDebounceTime)>debounceDelay)
{
  // si el estado ESTABLE cambio 
 if (reading != ButtonState){
  ButtonState = reading;

  if (ButtonState == HIGH){
    ledState = !ledState;
    digitalWrite(ledPin,ledState);
  }
 }
}


lastReading = reading;

}




