#include<stdio.h>
#include<stdlib.h>
void main()
{
int n,i,*p,s=0,avg;
printf("enter value of n.");
scanf("%d",&n);
p=(int *) malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
scanf("%d",p+i);
}
for(i=0;i<n;i++)
{
s=s+(*(p+i));
}
avg=s/n;
for(i=0;i<n;i++)
{
if(*(p+i)>avg)
{
printf("%d",*(p+i));
}
}
free(p);
}
