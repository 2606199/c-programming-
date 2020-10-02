#include<stdio.h>
void main()
{
int x;
printf("enter any  number.");
scanf("%d",&x);
if(x==0)
{
printf("number is zero");
}
else
{
    if(x>0)
    {
        printf("no. is positive");
    }
    else
        printf("no. is negative");
}
}

