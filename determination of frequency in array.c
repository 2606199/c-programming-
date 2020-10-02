#include<stdio.h>
void main()
{
int a[50],n,i,ele,c=0;
printf("enter limit of an array.");
scanf("%d",&n);
printf("enter element of array.");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the element whose frequency you want.");
scanf("%d",&ele);
for(i=0;i<n;i++)
{
if(a[i]==ele)
c++;
}
printf("frequency of entered element is %d",c);

}
