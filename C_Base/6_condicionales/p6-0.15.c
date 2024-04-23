/*Ingresar por teclado el nombre, la edad y el sexo de cualquier persona 
e imprima, solo si la persona es de sexo masculino y mayor de edad,
 el nombre de la persona */

#include <stdio.h>

int main()
{
    char nombre[30], sexo;
    int edad;
    printf("Ingrese nombre: ");
    scanf("%s", nombre);
    printf("Ingrese edad: ");
    scanf("%d", &edad);
    printf("Ingrese sexo: ");
    scanf(" %c", &sexo);
    
    if (strcmp(sexo,'m')== 0  && (edad >18)==0)
        printf("El nombre de la persona es %s\n",nombre);
    else
        printf("La persona es femenino o menor de edad\n");
        
printf("\n");
return 0;
}