/*
* Autor: Oscar Kevin
* Fecha:  09/12/25
* versión: 0.1
*/

#include <Servo.h>
#include <IRremote.hpp>

#define PIN_IR 7
#define PIN_SERVOMOTOR 3

Servo Motor;

void setup() 
{
  Serial.begin(9600);
  IrReceiver.begin(PIN_IR, ENABLE_LED_FEEDBACK);
  Serial.println("Listo para recibir señales IR...");
  Motor.attach(PIN_SERVOMOTOR);
}

void loop() 
{
  if (IrReceiver.decode()) 
  {
    int codigo = IrReceiver.decodedIRData.command;

    Serial.print("Codigo recibido: ");
    Serial.println(codigo);

    // --- CONTROL DEL SERVOMOTOR SEGÚN EL BOTÓN ---
    switch (codigo) 
    {
      case 24:   // EJEMPLO: botón "UP"
        Motor.write(0);
        Serial.println("Servo a 0 grados");
        break;

      case 82:   // EJEMPLO: botón "OK"
        Motor.write(90);
        Serial.println("Servo a 90 grados");
        break;

      case 94:   // EJEMPLO: botón "DOWN"
        Motor.write(180);
        Serial.println("Servo a 180 grados");
        break;

      default:
        Serial.println("Botón no asignado");
        break;
    }

    IrReceiver.resume();  
  }
}