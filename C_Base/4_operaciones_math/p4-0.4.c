//write program in C,  that calculate potentiation of number with exponential 3

#include <stdio.h>
#include <math.h>

int main()
{
    int n,y;
    printf("Enter a number: ");
    scanf("%i",&n);
    y=pow(n,3);
    printf("Su potencia 3 es =%i\n",y);
    return 0;
}