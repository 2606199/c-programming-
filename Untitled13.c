#include<stdio.h>
void main()
{
char c;
printf("enter alphabet ");
scanf("%c",&c);
if(c=='R'||c=='r')
printf("red");
else if(c=='G'||c=='g')
printf("green");
else if(c=='Y'||c=='y')
printf("yellow");
else if(c=='B'||c=='b')
printf("blue");
else
    printf("error");
}
