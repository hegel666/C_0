//Uso de variables cadena     

#include <stdio.h>


int main()
{
    char n[30], a[50];


    printf("Ingrese su nombre :");
    scanf("%s",&n); 
    
    printf("Ingrese su Apellido :");
    scanf("%s",&a); 

    printf("Su nombre es: %s\n",n);
    printf("Su Apellido es: %s\n",a);
    printf("Su nombre completo es: %s %s\n",n,a);


return 0;
}

 


