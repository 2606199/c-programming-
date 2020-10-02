#include<stdio.h>
void main()
{
int a[50],i,n,s=0;
float avg;
printf("enter limit 0f array.");
scanf("%d",&n);
printf("enter your array elements.");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    s=s+a[i];
}
printf("\nsum is %d",s);
avg=s/n;
printf("\naverage is %f",avg);
for(i=0;i<n;i++)
{
    if(avg<a[i])
    {
    printf("\n no. greater than average is %d",a[i]);
    }
}

}

