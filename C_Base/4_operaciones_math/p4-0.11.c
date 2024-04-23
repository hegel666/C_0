// Resolver la ecuacion cuadratica
// ecuacion ax2+bx+c=0

#include <stdio.h>
#include <math.h>

void main ()
{
  double a,b,c,d,x1,x2,m;

  printf ("Ingrese valor de a=" );
  scanf("%lf",&a);
 
  printf ("Ingrese valor de b=" );
  scanf("%lf",&b);
  
  
  printf ("Ingrese valor de c=" );
  scanf("%lf",&c);
  
  d=pow(b,2)-4*a*c;
 
  printf ("\n" );

if (d>0)
   {

x1=(-b+sqrt(d))/(2*a);
x2=(-b-sqrt(d))/(2*a);

  printf("El discriminante positivo es=%2.2lf\n\n",d);
  printf("Las 2 raices reales son:\n\n");
  printf("El valor de X1= %2.2lf\n",x1);

printf("El valor de X2= %2.2lf\n",x2);

  printf ("\n" );
    }

else
   {
	if (d<0)

          { 
           printf("El discriminante negativo es=%2.2lf\n",d);
           printf("Las 2 raices COMPLEJAS son:\n\n");

           m=-b/(2*a);

           printf("El valor de X1\n");
           printf("%2.2lf",m);  printf(" +i raiz (%2.2lf",-d);  printf(")/%2.2lf\n\n",2*a);

           printf("El valor de X2\n");
           printf("%2.2lf",m);  printf(" -i raiz (%2.2lf",-d);  printf(")/%2.2lf\n",2*a);
           printf ("\n" );

            }
       else
            {

           x1=(-b+sqrt(d))/(2*a);
           x2=(-b-sqrt(d))/(2*a);

           printf("El discriminante  es=%2.2lf\n\n",d);
           printf("Las raices reales son iguales  :\n\n");
           printf("El valor de X1= %2.2lf\n",x1);
           printf("El valor de X2= %2.2lf\n",x2);
           printf ("\n" );
            }

     }
  
return;
}
