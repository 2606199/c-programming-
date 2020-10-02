#include<stdio.h>
int fact(int);
void main()
{
int n,r,p;
printf("enter n and r");
scanf("%d%d",&n,&r);
p=fact(n)/fact(n-r);
printf("%d",p);
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


