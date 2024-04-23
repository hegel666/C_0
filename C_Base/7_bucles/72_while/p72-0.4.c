//Imprimir en pantalla la palabra "hola"
// mientras se presiona el numero 1.

#include <stdio.h>

int main()
{
int num;

printf("Ingrese un numero=");
scanf("%d", &num);

while (num==1)
{
printf("Hola\n");
printf("Ingrese otro numero:");
scanf("%d", &num);
}

printf("\n");
return 0;
}
