#include<stdio.h>
void main()
{
int i,j;
char a[30];
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>=65&&a[i]<104)
a[i]=a[i]+14;
else if(a[i]>108&&a[i]<=122)
a[i]=a[i]-12;
}
puts(a);
}
