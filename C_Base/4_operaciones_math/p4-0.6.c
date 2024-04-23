//Calculate  hypotenuse of a triangle

#include <stdio.h>
#include <math.h> //libreria de funciones matematicas

int main()
{
    float a,b,c;

    printf("Calculo de la hipotenusa segun T. Pitagoras\n\n");

    printf("Ingrese el valor del cateto a = ");
    scanf("%f",&a);
    printf("Ingrese el valor del cateto b = ");
    scanf("%f",&b);
    
    c=sqrt(a*a+b*b);
  
    printf ("The hypotenuse is c = %.2f",c);

    printf("\n");


return 0;
}

