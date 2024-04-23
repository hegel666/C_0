//write program in C, that calculate quadratic root of one number    
#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    float y;

    printf("Enter a number: ");
    scanf("%d", &num);
    y=sqrt(num); // se usa funcion sqrt gracias a la libreria math.h
    printf("Quadratic root  is %.2f\n",y);
    return 0;
}





