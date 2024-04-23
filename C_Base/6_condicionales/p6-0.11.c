//

#include <stdio.h>

#define TARIFA1 1.2
#define TARIFA2 1
#define TARIFA3 0.9

int main()
{
    float consumo, tarifa;
    printf("Ingrese consumo electrico : "); scanf("%f",&consumo);

    if (consumo < 1000)
        tarifa = TARIFA1;
    if (consumo >=1000 && consumo <=1850 )
        tarifa = TARIFA2;
    if (consumo > 1850)
        tarifa = TARIFA3;

printf(" La tarifa es %.2f\n",tarifa);

return 0;
}