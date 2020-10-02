#include<stdio.h>
void main()
{
int ar[50],n,i;
printf("enter limit of array");
scanf("%d",&n);
printf("enter your elements.");
for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);             /*storing values in array*/
}
for(i=0;i<n;i++)
{

    printf("\n%d",ar[i]);              /*prinitng the stored value of array */

}
}
