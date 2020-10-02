#include<stdio.h>
void main()
{
char a[30];
int  w,i;
printf("enter string.");
gets(a);
if(a[0]==' ')
{
w=0;
}
else
{
w=1;
}
i=0;
while(a[i]!='\0')
{
    if(a[i]==' '&&a[i+1]!=' ')
{
    w++;
}

}
printf("%d",w);

}
