#include<stdio.h>
void main()
{
int a[50],i,n,max,min;
printf("enter limit of your array.");
scanf("%d",&n);
printf("enter your elements of array.");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
for(i=1;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
if(a[i]<min)
{
min=a[i];
}
}
printf("maximum of entered no.s  is :%d \nand minimum of entered no.s is :%d",max,min);
}
