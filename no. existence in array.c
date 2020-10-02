#include<stdio.h>
void main()
{
int a[50],i,n,ele;
printf("enter limit of array.");
scanf("%d",&n);
printf("enter your element of array.");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter no. which you want to find.");
scanf("%d",&ele);
for(i=0;i<n;i++)
{
if(a[i]==ele)
printf("no. exists in array.");break;
}
if(a[i]!=ele)
    printf("no. does not exists.");

}
