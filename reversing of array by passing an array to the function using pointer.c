#include<stdio.h>
void rev(int *,int);
void main()
{
int a[50],i,n;
printf("enter limit of your array.");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
rev(a,n);
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}
void rev(int *p,int m)
{
int t,i;
for(i=0;i<m/2;i++)
{
t=*(p+i);
*(p+i)=*(p+m-1-i);
*(p+m-1-i)=t;
}
}
