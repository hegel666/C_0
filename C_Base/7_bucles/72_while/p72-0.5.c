//saldo

#include <stdio.h>


int main()
{
float saldo,cantidad;

//ingresar el saldo inicial
printf("Cual es el saldo inicial:");
scanf("%f",&saldo);

//luego se añade mas cantidades de forma seguida
//hasta cantidad se digite como 0
printf("Ingrese o retire cantidades:\n");

cantidad=1;
while (cantidad)
  {
    scanf("%f",&cantidad);
    saldo=saldo+cantidad;	
  }
printf("El valor del saldo actual es=%.2f",saldo);

printf("\n");
return 0;
}
