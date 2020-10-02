#include<stdio.h>
void main()
{
int n,i;
printf("enter any no.");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0&&n%2==0)

printf("no. is pirme") ;

else
printf("no. is not prime");
}
}
