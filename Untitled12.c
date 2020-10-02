#include<stdio.h>
#include<math.h>
void  main()
{
int p,t,n;
float si,r,ci;
printf("enter your principal,rate,time and no. of years interest is paid");
scanf("%d%d%d%f",&p,&t,&n,&r);
if(p>10000)
{
si= (p*r*t)/100;
printf("simple interest is %f",si);
}
else if (p<10000)
ci=p*(pow(1+(r/n),n*t));
printf("compund interest is %f",ci);
}
