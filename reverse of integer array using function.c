#include<stdio.h>
void rev(int [],int);
void main()
{
int a[50];
int n,i;
printf("Enter limit of array.");
scanf("%d",&n);
printf("Enter elements in array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
rev(a,n);
for(i=0;i<n;i++)
{
    printf("%d",a[i]);
}
}


void rev(int x[],int m)
{
int t,i;
for(i=0;i<m/2;i++)
{
t=x[i];
x[i]=x[m-1-i];
x[m-1-i]=t;
}


}
