#include<stdio.h>
#include<string.h>
void main()
{
char a[40],t;
int i,j;
printf("Enter string");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
for(j=i+1;a[j]!='\0';j++)
{
if(a[i]>=a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
puts(a);

}
