#include<stdio.h>
void main()
{
int x,y;
printf("enter your choice");
printf("\n 1. square of no.");
printf("\n 2.cube of no.");
printf("\n 3.half of no.");
scanf("%d",&x);
if(x==1)
{
printf("\nenter no.");
scanf("%d",&y);
printf("\nsquare is %d",y*y);
}
else if(x==2)
{
printf("\nenter  no.");
scanf("%d",&y);
printf("\ncube  is %d",y*y*y);
}
else if(x==3)
{
    printf("\nenter no.");
scanf("%d",&y);
printf("\nhalf is %d",y*0.5);
}
else
printf("\nerror");


}
