
#include<stdio.h>
void main()
{
int a[50],i,n,t;
printf("enter limit of your array.");
scanf("%d",&n);
printf("enter your elements of array.");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n/2;i++)
{
t=a[i];
a[i]=a[n-1-i];
a[n-1-i]=t;
}
for(i=0;i<n;i++)
{
printf("\n%d",a[i]);
}}

