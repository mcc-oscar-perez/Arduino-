/*
* Autor: Oscar Kevin
* Fecha:  09/12/25
* versión: 0.1
* Copyright: Explora. Este formato esta sujeto a las disposicicones aplicables en materia de propiedad intelectual.
* Contacto: oskr-75@hotmail.com 
* Cambios por: None
* Correciones por: None
*/

#define PIN_ANALOGICO_A0 14
#define DELAY_10_MILISEGUNDO 10

int datosPotenciometro = 0;

void setup() 
{
 pinMode(PIN_ANALOGICO_A0, INPUT); 
 Serial.begin(9600);
}

void loop() 
{
 datosPotenciometro = analogRead(PIN_ANALOGICO_A0); // Lectura del pin analogico 
 Serial.println(datosPotenciometro);
 delay(DELAY_10_MILISEGUNDO);
}
