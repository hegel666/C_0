/*Division y residuo*/

#include <stdio.h>

void main()
{

int n1;
int n2;
int div;
int r;


printf("Ingrese numero n1:");
scanf("%d",&n1);

printf("Ingrese numero n2:");
scanf("%d",&n2);

div=n1/n2;
r=n1%n2;


printf("La division es=%d\n",div);
printf("El residuo  es=%d\n",r);

return;

}








