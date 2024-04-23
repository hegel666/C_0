//bucle while
// mientras la condicion sea verdadera
//realizar la instruccion o bloque de instrucciones

#include <stdio.h>

void main()
{

int i=1;
int m;

printf("Ingresar numero:");
scanf("%d",&m);

while (i<=m) 
  {
   printf("%d\n",i);
   i=i+1;
   //i++;
  }

printf("\n");

return;
}