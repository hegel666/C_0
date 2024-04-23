/* Suma, diferencia y multiplicación de dos números  */

#include <stdio.h>

void main()
{
int n1,n2,s,d,m;

printf("Ingrese numero n1:");
scanf("%d",&n1);

printf("Ingrese numero n2:");
scanf("%d",&n2);

s=n1+n2;
d=n1-n2;
m=n1*n2;

printf("La suma es=%d\n", s);
printf("La diferencia es=%d\n", d);
printf("La multiplicacion es=%d\n", m);
printf("\n");

return;

}
