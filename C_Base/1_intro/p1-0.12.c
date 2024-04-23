
//programa ejemplo que muestra tipo de dato

#include <stdio.h>

void main(){
	char  a = 'e';
	short b = -15;
	int c = 1024;
	unsigned int d = 128;
	long e = 123456;
	float f = 15.678;
	double g = 123123.123123;
	
	printf ("El valor de la variable caracter a es: %c", a);
	printf("\n");
	printf ("El valor de la variable short  b es: %i", b);
		printf("\n");
	printf ("El valor de la variable int  c es: %i", c);
		printf("\n");
	printf ("El valor de la variable sin signo  d es: %i", d);
		printf("\n");
	printf ("El valor de la variable long  e es: %li", e);
		printf("\n");
	printf ("El valor de la variable float  f es: %.2f", f);
		printf("\n");
	printf ("El valor de la variable double g es: %.2lf", g);
	
	printf("\n");
	
return;
}

