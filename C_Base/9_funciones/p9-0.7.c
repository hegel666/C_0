//USO de FUNCIONES
//Calculo del Area de un triangulo
//Datos: base y altura

#include <stdio.h>

//Declaracion funcion area 
float area(float x, float y); //de tipo float con parametros, tipos y variables
                              

//Funcion principal
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
int main()
{
    float b, h, A;  //declaracion de variables de main 
    printf("Ingrese base b :");scanf("%f",&b);
    printf("Ingrese altura  h :");scanf("%f",&h);
    
    A=area(b,h);  //llamada de la funcion

    printf("El Area del triangulo es= %.2f\n",A);

printf("\n");
return 0;
}
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx


/*Definicion de Funcion area*/
/*Codificacion de Funcion area de un triangulo*/

    float area(float x, float y)
    { 
        float r; //variable local de la funcion satelite
        
        r=(x*y)/2;   //operacion de la funcion
    
    return r;
    
    }
    