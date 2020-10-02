#include<stdio.h>
void main()
{
int i,n;
float sum=0;
printf("enter limit of no.");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+1.0/i;
}
printf("%f",sum);


}
