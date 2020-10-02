#include<stdio.h>
int fact(int);
void main()
{
int n,r;
float c;
printf("enter n,r");
scanf("%d%d",&n,&r);
c= fact(n)/(fact(r)*fact(n-r));
printf("%f",c);
}
int fact(int n)
{
int i,fact=1;
for(i=1;i<=n;i++)
{
fact=fact*i;
}
return fact;
}
