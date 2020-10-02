#include<stdio.h>
void main()
int x;

printf("square");
printf("cube");
printf("half");
printf("choose one option");
scanf("%d",&x);
switch(x)
{
case 1 :printf("enter a number");
             scanf("%d",&y);
             printf("square of no. is %d",y*y);break;

case 2 :printf("enter a no.");
             scanf("%d",&y);
             printf("cube  is %d",y*y*y);break;

case 3 :printf("enter a no.");
             scanf("%d",&y);
             printf("half is %d",y/2);break:

  default :printf("wrong selection");

 }
  }





