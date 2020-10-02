#include<stdio.h>
void main()
{

int a,i,j,k,l,m;
for(i=1;i<=4;i++)
{
a=0;
for(j=4;j>=i;j--)
{
a++;
printf("%d",a);
}
for(l=1;l<i;l++)
{
printf(" ");
}
for(m=1;m<i;m++)
{
printf(" ");
}
for(k=4;k>=i;k--)
{
printf("%d",a);
a--;
}
printf("\n");
}
}
