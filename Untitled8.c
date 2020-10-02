#include<stdio.h>
void main()
{
int x,f;
printf("enter values of x and get ranges corresponding to it");
scanf("%d",&x);
if(x>=0&&x<10)
{
f=x+2;
printf("range is %d",f);
}
else if(x>=10&&x<20)
{
f=x*x+2;
printf("range is %d",f);
}
else if(x>=20&&x<30)
{
f=x+5;
printf("range is %d",f);
}
else
printf("range is 0");
}
