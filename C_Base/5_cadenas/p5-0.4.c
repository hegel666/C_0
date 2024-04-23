//Cadena de nombre y apellidos 

#include <stdio.h>

int main()
{
    char n[30], a[50];


    printf("Ingrese su nombre :");
    
    gets(n); // Se usa la funcion gets   
    
    //printf("Su nombre es: %s\n",n);

    printf("Ingrese su Apellido :");
    
    gets(a); // Se usa la funcion gets   
    
    //printf("Su Apellido es: %s\n",a);

    printf("Su nombre completo es: %s %s\n",n,a);

return 0;
}

 


