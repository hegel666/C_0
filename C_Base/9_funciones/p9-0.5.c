//

#include <stdio.h>

//Declaraciones de funciones:
void imprimir(); //declaracion de funcion1
void imprimir2( char mensaje[]); //declaracion de funcion2
int suma(); //declaracion de funcion3
float division(float numero1, float numero2); //declaracion de funcion4

//Implementacion Codificaciones de funciones:

//Codificacion de funcion1
void imprimir()  
{
    printf("Hola Mundo\n");
}

//Codificacion de funcion2
void imprimir2( char mensaje[]) 
{
    printf("%s\n",mensaje);
}

//Codificacion de funcion3
int suma()
  { 
  int n1 =1;
  int n2 = 2;
  int resultado;
  resultado = n1 + n2;
  return resultado;
  }

//Codificacion de funcion4
float division(float numero1, float numero2)
  { 
  float resultado_division;
  resultado_division = numero1 / numero2;
  return resultado_division;
  }


//Funcion principal
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
int main()
{
    int resultado_suma;
    float resultadoDEdivision;

printf("\n");

    imprimir(); //llamada de funcion1

    imprimir2("Hola Hegel"); //llamada de funcion2

    resultado_suma = suma(); //llamada de funcion3
    printf("El resultado de la suma es: %d\n",resultado_suma);

    resultadoDEdivision =division(10,5);
    printf("El resultado de la division es: %.2f\n",resultadoDEdivision);
         
printf("\n");
return 0;
}
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx