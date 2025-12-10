/*
* Autor: Oscar Kevin
* Fecha:  09/12/25
* versión: 0.1
* Copyright: Explora. Este formato esta sujeto a las disposicicones aplicables en materia de propiedad intelectual.
* Contacto: oskr-75@hotmail.com 
* Cambios por: None
* Correciones por: None
*/


#include <IRremote.hpp>
#define PIN_IR 7 // Pin donde conectarse el OUT del receptor 


void setup() 
{
 Serial.begin(9600);
 IrReceiver.begin(PIN_IR,ENABLE_LED_FEEDBACK);
 Serial.println("Listo para recibir señales IR...");
}

void loop() 
{

 if(IrReceiver.decode())
 {
  Serial.print("Codigo recibido: ");
  Serial.println(IrReceiver.decodedIRData.command,DEC);

  IrReceiver.resume(); 

 }

}
