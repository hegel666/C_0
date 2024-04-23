//Tipos de Datos en C

#include <stdio.h>

int main()
{   

    printf("Tipo de datos\n");
    
    char a = 'e';
    
    short b = -15;
    int c = 1024;
    unsigned int d = 128;
    long e = 123456;

    float f = 15.678;
    double m = 123123.123123;

    printf("%c\n",a);

    printf("%d\n",b);
    printf("%i\n",c);
    printf("%i\n",d);
    printf("%li\n",e);

    printf("%.2f\n",f);
    printf("%.4lf\n",m);


return 0;
}