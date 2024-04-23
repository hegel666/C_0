#include <stdio.h>

int main()
{
float a,b;

printf("Ingrese el valor de a=");
scanf("%f",&a);
printf("Ingrese el valor de b=");
scanf("%f",&b);
if (a>b)
  printf("El numero mayor es a=%.2f",a);
else
  printf("El mayor numero es b=%.2f",b);

printf("\n");

return 0;
}
