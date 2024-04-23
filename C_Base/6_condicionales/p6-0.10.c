//
//consumo <1000          
//  1000>= consumo <= 1850 
//consumo <1000

#include <stdio.h>

int main()
{
    float consumo;
    printf("Ingrese consumo electrico : "); scanf("%f",&consumo);

    if (consumo <1000)
        printf("La tarifa es = 1.2\n");
    if (consumo>=1000 && consumo <=1850)
        printf("La tarifa es = 1\n");
    if (consumo > 1850)
        printf("La tarifa es = 0.9\n");

return 0;
}