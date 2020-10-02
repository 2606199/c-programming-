#include<stdio.h>
void main()
{
int i,n;
printf("enter limit of no.");
scanf("%d",&n);
for(i=2;i<=n;i=i+2)
{
if(i%6==0)
printf("\n%d",i);

}

}
