#include<stdio.h>
void main()
{
int i,n,sum=0;
printf("enter limit of no.");
scanf("%d",&n);
for(i=2;i<=n;i=i+2)
{
sum=sum+i;
}
printf("%d",sum);
}
