//Condicional Simple doble

#include <stdio.h>

 
int main()
{   
    int a;

    printf("Ingrese numero: ");
    scanf("%i",&a);

    if (a>0)
        printf("El numero positivo es:%i\n", a);
    else
        printf("El numero negativo es %i",a);
    
printf("\n");
    
return 0;
}