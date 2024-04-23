#include <stdio.h>

void main()
{
int i,n;
int m=1;
printf("Ingresar numero entero \n");
scanf("%d",&n);

if (n<0)
  {
    printf("No valido para numeros negativos\n");
    printf("Ingrese valor >= 0\n");
  }
else
  {
    for (i=1 ;i<=n ;i=i+1)
    m=i*m;
    printf("Factorial es= %d\n",m);
  }

printf("\n");  
return;
}





