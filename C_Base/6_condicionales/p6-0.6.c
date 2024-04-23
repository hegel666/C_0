//programa que ingresa edad e indica como 
//resultado si es menor o mayor de edad

#include <stdio.h>


int main()
{
int edad;

printf("Ingrese edad:");
scanf("%d",&edad);

if (edad<18)
  printf("Es menor de edad");
else
  printf("Es mayor de edad");

printf("\n");

return 0;
}
