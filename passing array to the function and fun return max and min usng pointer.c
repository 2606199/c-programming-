#include<stdio.h>
void maxmin(int *,int,int*,int*);
void main()
{
int a[50],i,n,max,min;
printf("Enter limit of your array.");
scanf("%d",&n);
printf("enter elements .");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
maxmin(a,n,&max,&min);
printf("max and min of your array is %d and %d",max,min );
}
void maxmin(int *p,int m,int *q,int *r)
{
int i;
*q=*(p+0);
*r=*(p+0);
for(i=0;i<m;i++)
{
if(*(p+i)>*q)
*q=*(p+i);
if (*(p+i)<*r)
*r=*(p+i);
}
}
