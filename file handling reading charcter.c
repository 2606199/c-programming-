#include<stdio.h>
void main()
{
FILE *p=fopen("F:/kl.txt","r");
int ch;
while((ch=fgetc(p))!=EOF)
{

    printf("%c",ch);
}

}
