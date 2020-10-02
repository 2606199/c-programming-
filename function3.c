#include<stdio.h>
void area();
void main()
{
area();
}
void area()
{
float a1,a2,r,s;
printf("enter radius of circle and side of square");
scanf("%f%f",&r,&s);
a1=3.14*r*r;
a2=s*s;
printf("area of circle is %f and area of square is %f",a1,a2);
}
