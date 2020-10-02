#include<stdio.h>
void main()
{
FILE *p1,*p2;
int ch;
p1=fopen("F:/kl.txt","r");
p2=fopen("F:/v1.txt","w");
while((ch=fgetc(p1))!=EOF)
{
fputc(ch,p2);
}
}
