#include<stdio.h>
void main()
{
int i,j,k,l,m,s,t,h;
for(i=1;i<=4;i++)
{
for(j=1;j<=4-i;j++)
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
}

for(m=1;m<=4;m++)
{
for(s=1;s<m;s++)
{
printf(" ");
}
for(t=4;t>=m;t--)
{
printf("*");
}
for(h=4;h>=m;h--)
{

    printf("*");
}
printf("\n");
}

}
