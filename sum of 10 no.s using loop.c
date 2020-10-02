#include<stdio.h>
void main()
{
int sum=0,n,i;
float avg;
printf("enter 10 no.s");
for(i=0;i<=10;i++)
{
scanf("%d",&n);
sum=sum+n;
}
printf("sum of 10 no.s is %d",sum);
avg=sum*0.1;
printf("\navg is %f",avg);
}

