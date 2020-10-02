#include<stdio.h>
void main()
{
int i,j;
char a[50];
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==a[i+1])
{
for(j=i;a[j]!='\0';j++)
{
a[j]=a[j+2];
a[j+1]=a[j+3];
if(a[j+2]=='\0'||a[j+3]=='\0')
break;
}
i=i-1;
}
}
puts(a);
}
