#include<stdio.h>
#include<string.h>
void main()
{
char a[50];
int p,l,i;
puts("enter the string");
gets(a);
l=strlen(a);

for(i=0;p<l;p++)
{

    if(a[i]==75)
    {
    a[i]=65;
    }
    if(a[i]<=122&&a[i]>=109)
    {
        a[i]=a[i]-12;
}
if(a[i]<=108&&a[i]>=97)
{

    a[i]=a[i]+14;
}
puts(a);
}
}
