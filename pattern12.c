#include<stdio.h>
void main()
{
int i,j,k,l;
for(i=1;i<=3;i++)
{
for(j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
}
for(l=1;l<=2;l++)
{
for(k=2;k>=l;k--)
{
    printf("*");
}
printf("\n");
}

}

