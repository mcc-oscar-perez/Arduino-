/*
* Autor: Oscar Kevin
* Fecha:  09/12/25
* versión: 0.1
* Copyright: Explora. Este formato esta sujeto a las disposicicones aplicables en materia de propiedad intelectual.
* Contacto: oskr-75@hotmail.com 
* Cambios por: None
* Correciones por: None
*/

const int buzzerActivo = 7;
const int buzzerPasivo = 6;

void setup() 
{
 pinMode(buzzerActivo, OUTPUT);
 pinMode(buzzerPasivo, OUTPUT);

}

void loop() 
{
  // Buzzer activo
  digitalWrite(buzzerActivo,HIGH); //Enciende sonido fijo 
  delay(500);
  digitalWrite(buzzerActivo,LOW); // Apaga
  delay(500);

  //Buzzer pasivo
  tone(buzzerPasivo, 440); // Nota A4
  delay(400);
  tone(buzzerPasivo, 523); // Nota C5
  delay(400);
  tone(buzzerPasivo, 659); // Nota E5
  delay(400);
  noTone(buzzerPasivo); // Nota C5
  delay(300);
}
