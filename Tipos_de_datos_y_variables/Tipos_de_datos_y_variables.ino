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

Serial.begin(9600); // Velocidad de comunicacion con el ardiono
word Mipalabra = 7; // Tipo de dato word 
Serial.println("Tipo: Word"); // Para imprimir la palabra 
Serial.print("Bytes: ");
Serial.println(sizeof(Mipalabra)); // imprimimos el tamaño en bytes de nuestra variable "word"
Serial.print("Valor:");
Serial.println(Mipalabra); // imprimiendo el valor que ocupa ese espacio, en este caso es el numero 7 
Serial.println("");

// Variable tipo entero "Int"

int ValorEntero = 5;
Serial.println("Tipo: int");
Serial.print("Bytes:");
Serial.println(sizeof(ValorEntero));
Serial.print("Valor:");
Serial.println(ValorEntero);
Serial.println("");

// variable tipo "usinged char" (tambien conocida como byte)

unsigned char MiUsuario = 200;
Serial.println("Tipo: unsigned char");
Serial.print("bytes:");
Serial.println(sizeof(MiUsuario));
Serial.print("Valor:");
Serial.println(MiUsuario);
Serial.println("");

// Variable tipo char

char MiChar = 'A';
Serial.println("Tipo: char");
Serial.print("Bytes:");
Serial.println(sizeof(MiChar));
Serial.print("Valor:");
Serial.println(MiChar);
Serial.println("");


// Variable tipo Float 

float MiFloat = 3.141656;
Serial.println("Tipo: Float");
Serial.print("Bytes:");
Serial.println(sizeof(MiFloat));
Serial.print("Valor:");
Serial.println(MiFloat,6);
Serial.println("");


}

