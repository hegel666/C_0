//ARREGLO de caracteres  : ==> CADENA

#include <stdio.h>

int main()
{
    char nombre[30], profesion[30];
    
    printf("Ingrese el nombre completo: ");
    gets(nombre);

    printf("Ingrese la profesion: ");
    gets(profesion);

    printf("\n");
    
    printf("El empleado se llama: %s\n", nombre);
    printf("Es profesional como: %s\n\n", profesion);

    printf("El empleado se llama %s y es %s\n\n",nombre, profesion);



return 0;
}