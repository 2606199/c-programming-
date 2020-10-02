#include<stdio.h>
void main()
{
char a[50];
int i,t,j;
printf("enter your string.");
gets(a);
for(i=0;a[i]!='\0';i++)
{
for(j=i+1;a[j]!=0;j++)
{

    if(a[i]>a[j])
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;

    }
}
}
puts(a);
}
