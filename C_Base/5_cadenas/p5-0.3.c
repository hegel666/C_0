//cadena usando la funcion gets()

#include <stdio.h>


int main()
{
    char x[30];


    printf("Ingrese su nombre :");
    
    gets(x); // Se usa la funcion gets   
    
    printf("Su nombre es: %s\n",x);

return 0;
}

 


