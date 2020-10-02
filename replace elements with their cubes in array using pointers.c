#include<stdio.h>
#include<math.h>
void main()
{
int a[50],i,*p,n;
printf("enter limit of your array.");
scanf("%d",&n);
printf("enter elements of your array.");
p=a;
for(i=0;i<n;i++)
{
scanf("%d",p+i);
}
for(i=0;i<n;i++)
{
*(p+i)=pow(*(p+i),3);
}
for(i=0;i<n;i++)
{
printf("%d\n",*(p+i));
}
}
