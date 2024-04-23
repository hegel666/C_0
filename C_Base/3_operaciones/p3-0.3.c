# include <stdio.h>

int main()
{
float a,b,s,m;

printf("Ingrese el valor de a=");
scanf("%f",&a);
printf("Ingrese el valor de b=");
scanf("%f",&b);
s=a+b;
m=a*b;
printf("El valor de la suma es s=%.2f\n",s);
printf("El valor del producto es m=%.2f",m);
printf("\n");

return 0;
}