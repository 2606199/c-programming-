#include<stdio.h>
void main()
{

int i,n,fact=1;
printf("enter any no.");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("%d",fact);
}
