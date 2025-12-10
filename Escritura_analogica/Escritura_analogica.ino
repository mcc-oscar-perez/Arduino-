/*
* Autor: Oscar Kevin
* Fecha:  09/12/25
* versión: 0.1
* Copyright: Explora. Este formato esta sujeto a las disposicicones aplicables en materia de propiedad intelectual.
* Contacto: oskr-75@hotmail.com 
* Cambios por: None
* Correciones por: None
*/

int ledPin = 11;


void setup() 
{
 pinMode(ledPin,OUTPUT);
}

void loop() 
{
 for (int brillo = 0; brillo <= 255; brillo++)
 {
  analogWrite(ledPin, brillo);
  delay(40);
 }
 for(int brillo = 255; brillo >= 0; brillo--)
 {
  analogWrite(ledPin, brillo);
  delay(40);
 }

}
