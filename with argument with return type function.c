#include<stdio.h>
int sum(int,int);
int main()
{
int a,b,c;
printf("enter two no.s");
scanf("%d%d",&a,&b);
c=sum(a,b);
printf("%d",c);
return 0;
}
int sum(int x,int y)
{
int z;
z=x+y;
return z;
}
