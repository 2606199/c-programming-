#include<stdio.h>
void main()
{
char ch[100];int i,c=0;
printf("enter string.");
gets(ch);
for(i=0;ch[i]!='\0';i++)
{
c++;
}
printf("%d",c);
}
