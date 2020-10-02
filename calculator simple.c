#include<stdio.h>
void main()
{
float x,y;
char c;
printf("enter operator and two numbers");
scanf("%c%f%f",&c,&x,&y);
if(c=='*')
printf("multiplication  answer is %f",x*y);
else if(c=='+')
printf("addtion answer is %f",x+y);
else if(c=='-')
printf("subtraction is %f",x-y);
else if(c=='/')
printf("division answer is %f",x/y);
else
printf("error");

}
