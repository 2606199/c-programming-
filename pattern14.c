#include<stdio.h>
void main()
{
int i,j,k,l,m,n,s,t,b,f,g;
for(i=1;i<=3;i++)
{
for(j=1;j<=i;j++)
{
printf("*");
}
for(l=2;l>=i;l--)
{
printf(" ");
}
for(m=2;m>=i;m--)
{
printf(" ");
}
for(n=1;n<=i;n++)
{
printf("*");
}
printf("\n");
}


for(s=1;s<=2;s++)
{
for(t=2;t>=s;t--)
{
printf("*");
}
for(g=1;g<=s;g++)
{
printf(" ");
}
for(f=1;f<=s;f++)
{
printf(" ");
}
for(b=2;b>=s;b--)
{
printf("*");
}
printf("\n");
}

}
