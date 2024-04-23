//Struture of program and variables


#include <stdio.h> //libreria


#define PI 3.1416 //macro
 
int y = 5; //variable global

int main() //programa principal o funcion principal
{
int x=2; //variables local

printf("Hola Mundo\n"); // cuerpo de programa principal
printf("Salida de valor de variable = %d\n",x);
printf("El valor de x = %d y el valor de y = %d \n",x,y);

return 0; //termino de programa
}
