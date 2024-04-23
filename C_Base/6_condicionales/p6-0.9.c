//Determinar si un numero es par o impar

#include <stdio.h>

int main()
{

    int n;

    printf("Ingrese numero: ");scanf("%i",&n);
    
    if (n%2 == 0)
        printf("El numero es par\n");
    if (n%2 != 0)
        printf("El numero es impar\n");
    


return 0;
}