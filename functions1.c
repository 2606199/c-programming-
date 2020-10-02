#include<stdio.h>
void line();
void main()
{
line();
line();
printf("\tHello");
line();
line();
printf("\n\tBye");
line();
line();

}
void line()
{
int i;
for(i=1;i<=20;i++)
{
printf("*");
}
printf("\n");
}





