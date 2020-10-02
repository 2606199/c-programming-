#include<stdio.h>
void main()
{
    int x,a,b,c,d,e;
    printf("enter five digit numbers");
    scanf("%d",&x);
    a=x/10000;
    x=x%10000;
    b=x/1000;
    x=x%1000;
    c=x/100;
    x=x%100;
    d=x/10;
    e=x%10;
   printf("sum is %d",a+b+c+d+e);
}
