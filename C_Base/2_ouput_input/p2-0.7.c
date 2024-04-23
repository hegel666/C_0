//write in C program sum 2 numbers with library include      

#include <stdio.h>


int main()
{
int a;
int b;
int c;
int sum;

printf("Enter two numbers:\n");
scanf("%d%d",&a,&b);

c=a+b;
sum=c;

printf("The sum of %d and %d is %d\n",a,b,sum);
printf("\n");

return 0;
}