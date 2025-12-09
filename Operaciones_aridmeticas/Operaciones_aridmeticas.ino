/*
* Autor: Oscar Kevin
* Fecha:  04/12/25
* versión: 0.1
* Copyright: Explora. Este formato esta sujeto a las disposicicones aplicables en materia de propiedad intelectual.
* Contacto: oskr-75@hotmail.com 
* Cambios por: None
* Correciones por: None
*/


void setup() {

  // Declaración de variables globales (opcional, pero puede ser útil)
  int a = 15;
  int b = 5;

  // 1. Inicializar la comunicación serial
  Serial.begin(9600);
  
  // 2. Definición y cálculo de variables
  int suma = a + b;
  int resta = a - b;
  int multiplicacion = a * b;
  int division = a / b; // Corregido: divicion -> division
  int residuo = a % b;
  int asignacion = 30;

  // 3. Impresión de resultados
  Serial.println("OPERADORES ARITMETICOS EN ARDUINO");
  Serial.print("Suma: "); Serial.println(suma);
  Serial.print("Resta: "); Serial.println(resta);
  Serial.print("Multiplicacion: "); Serial.println(multiplicacion);
  Serial.print("Division: "); Serial.println(division);
  Serial.print("Residuo: "); Serial.println(residuo);
  Serial.print("Asignacion: "); Serial.println(asignacion);
  
// calculadora para grados
float temperaturaCelsius = 10.5;
float temperaturaFahrenheit = ((temperaturaCelsius * 9) / 5 ) + (32);
Serial.println("");

Serial.print("Temperaturas"); 
Serial.print(temperaturaFahrenheit);
Serial.println("");


// Ejercicio 4

float calificacion1 = 8.5;
float calificacion2 = 7;

float promedioCaifiacion = (calificacion1 + calificacion2) / 2;

Serial.print("Califiacion promedio "); 
Serial.println(promedioCaifiacion);
Serial.println("");

// Ejercicio 5


int numeroBase = 5;

int dobleNumero = 5 * 2; 
int tripleNumero = 5 * 3; 
Serial.print("El doble de tu numero es...");
Serial.println(dobleNumero);
Serial.print("El triple de tu numero es...");
Serial.println(tripleNumero);

Serial.println("");

}

void loop() {
}


