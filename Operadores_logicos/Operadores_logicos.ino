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

// inicializamos la comunicacion serial con arduino 
Serial.begin(9600);


// OPERADORES DE COMPARACION   

int numero1 = 10;
int numero2 = 20;
int resultado = 0;

// igual a ==
resultado = numero1 == numero2;

// Diferente de != 
resultado = numero1 != numero2;

// mayor a 
resultado = numero1 > numero2;

// menor a 
resultado = numero1 < numero2;

// menor que o igual 
resultado = numero1 <= numero2;

// mayor que o igual 
resultado = numero1 >= numero2;

// Ejercicios .....................................

// Ejercicio 1 comparar dos edades 

Serial.print("----------------COMPARADORES----------------");
Serial.println("");

int edadPersona1 = 10;
int edadPersona2 = 20;

int resultadoEdad = 0;

resultadoEdad = edadPersona1 == edadPersona2;
Serial.print("Le comparacion de la edad es:");
Serial.println(resultadoEdad);


resultadoEdad = edadPersona1 != edadPersona2;
Serial.print("Le comparacion de la edad es:");
Serial.println(resultadoEdad);
Serial.println("");


// Ejercicio 2 

int nota1 = 10;
int nota2 = 8; 

int resultadoCalificacion = 0;

resultadoCalificacion = nota1 > nota2; 
Serial.print("nota1 > nota2:");
Serial.println(resultadoCalificacion);

resultadoCalificacion = nota1 < nota2; 
Serial.print("nota1 < nota2:");
Serial.println(resultadoCalificacion);
Serial.println("");

// Ejercicio 3 Comparar el saldo de 2 cuentas 

int saldoCuenta1 = 10;
int saldoCuenta2 = 20;
int resultadoCuentas = 0;

resultadoCuentas = saldoCuenta1 >= saldoCuenta2;
Serial.print("SaldoCuenta1 >= SaldoCuenta2: ");
Serial.println(resultadoCuentas);


resultadoCuentas = saldoCuenta1 <= saldoCuenta2;
Serial.print("SaldoCuenta1 <= SaldoCuenta2: ");
Serial.println(resultadoCuentas);
Serial.println("");



// Ejercicio 4 comparar 2 temperaturas 

int TempDia = 16;
int TempNoche = 5; 

int resultadoTDias = 0;

resultadoTDias = TempDia > TempNoche; 
Serial.print("TempDia1 > TempNoche:");
Serial.println(resultadoTDias);

resultadoTDias = TempDia < TempNoche; 
Serial.print("TempDia1 < TempNoche: ");
Serial.println(resultadoTDias);
Serial.println("");

// Ejercicio 5 comparadon sesnores 

int  sensorA = 1;
int  sensorB = 0;
int  resultadoSensor = 0;

resultadoSensor = sensorA == sensorB;
Serial.print("SensorA == Sensor B: ");
Serial.println(resultadoSensor);

resultadoSensor = sensorA != sensorB;
Serial.print("SensorA != Sensor B: ");
Serial.println(resultadoSensor);
Serial.print("");


// OPERADORES LOGICOS 

Serial.print("----------------OPERADORES LOGICOS----------------");
Serial.println("");

int temperaturaHoy = 23;
int temperaturaAyer = 23;
int sensorAA = 12; 
int sensorBB = 25;

int resultadoLogico = 0;

// Operador AND &&
resultadoLogico = temperaturaHoy == temperaturaAyer && sensorAA == sensorBB;

// Operador OR || 
resultadoLogico = temperaturaHoy == temperaturaAyer || sensorAA == sensorBB;

// Operador NOT !
resultadoLogico = !temperaturaHoy;

}

void loop() 
{
 
}
