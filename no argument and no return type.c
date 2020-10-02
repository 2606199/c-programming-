#include<stdio.h>
int sum();
void main()
{
    int c;
c=sum();
printf("%d",c);
}
int sum()
{
int a,b,c;
printf("enter two no.s");
scanf("%d%d",&a,&b);
c=a+b;
return c;
}
