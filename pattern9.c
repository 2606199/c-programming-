#include<stdio.h>
void main()
{

int a,i,j,k,l;
for(i=1;i<=5;i++)
{a=0;
for(j=1;j<=5-i;j++)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
a++;
printf("%d",a);
}
for(l=1;l<i;l++)
{a--;
printf("%d",a);
}
printf("\n");
}
}
