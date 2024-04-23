//Comparacion de cadenas o  string

#include <stdio.h>

int main()
{
    char nombre[30],signo[20];

    printf("Ingrese el nombre: ");
    gets(nombre);

    printf("Ingrese signo: ");
    gets(signo);

    if (strcmp(signo,"aries")== 0)
        printf("Es signo aries y El nombre es: %s\n", nombre);
    else
        printf("No es signo aries\n");
        

return 0;
}