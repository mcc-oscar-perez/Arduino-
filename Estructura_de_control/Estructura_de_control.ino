/*
* Autor: Oscar Kevin
* Fecha:  04/12/25
* versión: 0.1
* Copyright: Explora. Este formato esta sujeto a las disposicicones aplicables en materia de propiedad intelectual.
* Contacto: oskr-75@hotmail.com 
* Cambios por: None
* Correciones por: None
*/

void setup() 
{
Serial.begin(9600);
while(!Serial){}

Serial.println("=== EJERCICIOS DE ESTRUCTURA DE CONTROL ===");
Serial.println();

// ---------------------------------------------------------------
// Ejercicio 1: if y else

int temperatura = 28;
if(temperatura > 25){
  Serial.println("Ejercicio 1: hace calor");
}else{
  Serial.println("Ejercicio 1: hace fresco");
}
Serial.println();

// Ejercicio 2: for 

Serial.println("Ejemplo 2: primeros 5 numeros");
for(int i = 1; i <= 5; i++){
 Serial.println("for: i ="); Serial.println(i);
}
Serial.println();


// Ejercicio 3: while y do... while

int contadorWhile = 0;
Serial.println("Ejercicio 3: while");

while(contadorWhile < 3){
  Serial.print("While: contadorWhile = "); 
  Serial.println(contadorWhile);
  contadorWhile++;
}
Serial.println();


int contadorDo = 0;

Serial.println("Ejercicio 3: do... while");

do{
 Serial.print("do...while:contadorDo = ");
 Serial.println(contadorDo);
 contadorDo++;
}while(contadorDo > 3);
Serial.println();

// Ejercicio 4: Switch... case

int opcionMenu = 2;
Serial.println("Ejercicio 4: switch...case");
switch(opcionMenu){
  case 1: Serial.println("Seleccionaste opcion 1"); break;
  case 2: Serial.println("Seleccionaste opcion 2"); break;
  default: Serial.println("Opcion no valida"); break;
}
Serial.println();

// Ejercicio 5: breack, continue, goto, return

Serial.println("Ejercicio 5: break, continue, goto, return");
for(int n = 0; n < 5; n++){
  if (n == 1) continue;
  if (n == 3) break;
  Serial.print("For con break/continue: n = ");
  Serial.print(n);
}

}





void loop() 
{
}
