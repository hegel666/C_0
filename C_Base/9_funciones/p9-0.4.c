//Funcion con retorno
//Funcion con parametros
//Las variables que se declaren locales se quedan dentro 


#include <stdio.h>

//declaracion de funcion
int suma(int, int); //con retorno de valor de tipo int y con parametros indicando solo tipo de datos
                    

//Funcion principal
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxx
int main()
{

    int n1, n2, res; // al parecer nuevamente se declara las variables n1 n2, pero es necesario

    printf("Ingrese el primer numero: "); //bloque de ingreso de datos en la funcion main()
    scanf("%d", &n1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &n2);

    res = suma(n1, n2); //llamada de funcion

    printf("El resultado es: %d\n", res);


return 0;
}
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx

//implementacion o codificacion de la funcion
int suma(int n1, int n2)
{
    int suma;  //variable local
    suma = n1 + n2;
    return suma;
}

