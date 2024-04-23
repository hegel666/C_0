//Calculate  hypotenuse of a triangle

#include <stdio.h>
#include <math.h>

int main()
{
    float a,b,c;
    printf ("Input catetos a and b:\n");
    scanf ("%f %f",&a,&b);
    
    //c=sqrt(a*a+b*b);
    c=sqrt(pow(a,2) + pow(b,2));
       
    printf ("The hypotenuse is c= %.2f",c);

    printf("\n");


return 0;
}

