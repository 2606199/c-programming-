#include<stdio.h>
void main()
{
int a[50],n,i;
printf("enter limit of array.");
scanf("%d",&n);
printf("enter elements of array.");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("\t\t%d",a[i]);
}
for(i=0;i<n;i++)
{
a[i]=a[i]*a[i];
}
for(i=0;i<n;i++)
{

    printf("\n%d",a[i]);
}

}
