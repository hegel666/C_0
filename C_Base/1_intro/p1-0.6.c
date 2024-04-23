//program basic ==> input and output 

// input ==> teclado : scanf 

// body and Algorithm 

// output ==> teclado : printf

#include <stdio.h>

 
int main()
{
    int a,b; //variables
    a = 0;
    b = 0;

    printf("Digite un número: a= ");
    scanf("%d", &a);

    b=a+5; //definitions of algorithm - aumenta valor en 5
    
    printf("El numero procesado aumentado en 5 es:   b = %d\n", b);


return 0;
}
