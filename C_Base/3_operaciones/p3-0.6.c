/* Suma, diferencia y multiplicación de dos números  */

#include <stdio.h>

void main()
{


int a,b;
float r;

printf("Ingrese numerador  a:");
scanf("%d",&a);

printf("Ingrese denominador  b:");
scanf("%d",&b);

r=a % b;

printf("El residuo es=%.2f\n", r);

printf("\n");

return;

}
