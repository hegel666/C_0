//firts input 2 numbers y make divisibility test.
#include <stdio.h>


int main() 
{
    int a, b;
    
    printf("Digite 2 numeros :\n");
    scanf("%d %d", &a, &b);
    if (a % b == 0) 
    {
        printf("El numero %i es divisible entre %i\n",a,b);
    } 
    else
        printf("El numero %d no es divisible entre %d",a,b );

printf("\n");

return 0;
}


