//Example x
//
//Se puede usar puts ("texto") en lugar de printf para mostrar texto

#include <stdio.h>
 
int main()
{
float x;

printf("Ingrese nota de alumno :");scanf("%f",&x);

if (x>10)
    //printf("El alumnos aprueba el curso\n");
    puts("El alumnos aprueba el curso\n");
else
    //printf("El alumnos no aprueba el curso\n");
    puts("El alumnos no aprueba el curso\n");

return 0;
}