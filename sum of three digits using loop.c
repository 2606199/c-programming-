#include<stdio.h>
void main()
{
int sum=0,n,i,rem;
scanf("%d",&n);
for(i=0;n>0;i++)
{
rem=n%10;
sum=sum+rem;
n=n/10;

}
printf("%d",sum);
}
