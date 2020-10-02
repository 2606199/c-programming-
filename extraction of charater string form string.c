#include<stdio.h>
void main()
{
char a[50];
int i,m,n;
printf("enter your string.");
gets(a);
printf("enter first and last position of string which you want to extract from original string. ");
scanf("%d%d",&m,&n);
for(i=m-1;i<=n-1;i++)
{
printf("%c",a[i]);

}

}
