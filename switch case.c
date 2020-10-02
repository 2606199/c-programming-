#include<stdio.h>
void  main()
{
char c;
printf("enter a number");
scanf("%c",&c);
switch(c)
{
case  'a':
case  'A' :
case  'e':
case 'E' :
case 'i' :
case 'I' :
case 'O' :
case 'o' :
case 'U' :
    case 'u':printf("vowel");break;
default  : printf("consonant");
}
}
