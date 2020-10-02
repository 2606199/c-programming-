#include<stdio.h>
void main()
{
int i,j;
char a;
a=65;
for(i=1;i<=4;i++)
{
for(j=4;j>=1;j--)
{
printf("%c",a);
a++;
}
printf("\n");
}
}
