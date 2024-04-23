//

#include <stdio.h>

//declaracion de una funcion
void sumar_dos_numeros(); //sin retorno de valor y sin parametros
                        

//Funcion principal
//xxxxxxxxxxxxxxxxxxxxxxxxx
int main()
{

sumar_dos_numeros(); //llamada de la funcion

return 0;
}
//xxxxxxxxxxxxxxxxxxxxxxxxx

//codificacion de la funcion 
void sumar_dos_numeros()  
{
    int n1,n2,s=0;    //varibles locales

    printf("Ingrese dos numeros: \n"); //el bloque de ingreso de datos esta en la funcion satelite
    scanf("%i %i",&n1,&n2);
    s=n1+n2; //algoritmo 
    printf("El resultado es: %d",s);
    printf("\n");
    return;
}
