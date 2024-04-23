//Calculate  hypotenuse of a triangle

#include <stdio.h>
#include <math.h> //libreria de funciones matematicas

int main()
{
    float a,b,c;

    printf("Ingrese el valor del cateto a =");
    scanf("%f",&a);
    printf("Ingrese el valor del cateto b =");
    scanf("%f",&b);
    
    //c=sqrt(a*a+b*b);
    c=sqrt(pow(a,2) + pow(b,2));
       
    printf ("The hypotenuse is c= %.2f",c);

    printf("\n");


return 0;
}

