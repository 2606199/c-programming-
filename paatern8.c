#include<stdio.h>
void main()
{

int i,j,k,l;
for(i=1;i<=5;i++)
{
for(j=1;j<=5-i;j++)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
printf("*");
}
for(l=1;l<i;l++)
{
printf("*");
}
printf("\n");
}}

