//Calcular el mayor de 2 numeros
// Usando condicionales anidados
// if (condicio1)
// else
//    if (condicion2)
//    else


#include <stdio.h>

int main()
{
    int a,b;
    printf("Ingrese dos numeros: \n");
    scanf("%d %d",&a,&b);

    if (a>b)
        printf("El mayor es %d\n",a);
    else if (b>a)
        printf("El mayor es %d\n",b);

    else
        printf("Ambos son iguales\n");

    return 0;

    

return 0;
}