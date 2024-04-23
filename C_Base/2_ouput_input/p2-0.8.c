#include <stdio.h>

int main()
{

char name[25];
int age;

printf("\n");
printf("What is your name?\n");
scanf("%s", &name);

printf("How old are you?\n");
scanf("%d",&age);
printf("\n");
printf("Hello %s, nice to meet you", name);
printf("\n");
printf("You are  %d years old", age);
printf("\n\n");

return 0;
}