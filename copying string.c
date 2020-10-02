#include<stdio.h>
void main()
{
char a[50],b[50];int i;
printf("enter string.");
gets(a);
gets(b);
for(i=0;b[i]!='\0';i++)
{
    a[i]=b[i];
}
a[i]='\0';
puts(a);
}
