#include<stdio.h>
#include<string.h>
void main()
{
char a[100];
int  i,c,s=0,l;
printf("enter string");
gets(a);
l=strlen(a);
for(i=0;a[i]!='\0';i++)
{c=0;
if((a[i]>='a'||a[i]<='z')||(a[i]>='A'||a[i]<='Z'))
{
c++;
}
else
{
s=s+a[i];
}
}
printf("sum of all numbers present in stirng is %d",s);
}
