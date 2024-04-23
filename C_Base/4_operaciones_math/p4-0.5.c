//Potencia de un numero
#include <stdio.h>
#include <math.h>

 
int main()
{
int a,p;
printf("Ingrese numero: ");
scanf("%i",&a);
p=pow(a,3);
printf("El valor de p es: %i\n",p);

return 0;
}