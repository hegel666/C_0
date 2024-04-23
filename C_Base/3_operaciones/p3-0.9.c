//
/*Calculo del area de un circulo*/
#include <stdio.h>

#define PI 3.1416

int main()
{
float A,r;

printf("Ingrese el valor del radio r=");
scanf("%f",&r);

A=PI*r*r;

printf("El valor del Area es A=%.4f\n",A);
printf("\n");

return 0;
}
