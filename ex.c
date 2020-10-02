#include<stdio.h>
void main()
{
int n,i,s1=0,s2=0;
for(i=1;i<=100;i++)
{
    if(i%2==0)
                s1=s1+i;
    else
        s2=s2+i;
}
printf("sum of even is %d  \nsum of odd is %d" ,s1,s2);
}

