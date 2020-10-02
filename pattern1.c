#include<stdio.h>
void main()
{
int i,n,j,a;
printf("no. of rows");
scanf("%d",&n);
a=1;
for(i=1;i<=n;i++)
{

for(j=1;j<=n;j++)
{
printf("%d",a);
a++;
}
printf("\n");
}


}
