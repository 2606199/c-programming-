#include<stdio.h>
#include<string.h>
void main()
{
char a[100],b[100],c[100];
int i,p,l2,l3;
printf("enter string.");
gets(a);
printf("enter substring which u want to insert in string.");
gets(b);
l2=strlen(b);
printf("enter position where u want to inset your substring.");
scanf("%d",&p);
for(i=0;i<'\0';i++)
{
c[i]=a[p+i];
}
l3=strlen(c);
for(i=0;i<l2;i++)
{
    a[p+i]=b[i];
}
for(i=0;i<l3;i++)
{
    a[p+l2]=c[i];
l2++;
}
puts(a);
}
