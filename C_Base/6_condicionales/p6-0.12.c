

#include <stdio.h>

void main()
{
int edad;

printf("Ingrese la edad de la persona:");
scanf("%d",&edad);

if (edad<18)
printf("Es menor de edad\n");

else

if (edad==18)
printf("Hace el servicio militar obligatorio\n");

else
printf("Es mayor de edad\n");


printf("\n");
return;
}
