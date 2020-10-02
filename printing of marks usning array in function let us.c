#include<stdio.h>
void display1(int);
void display2(int*);   /* (* means value at address)*/
void main()
{
int marks[4]={20,15,18,13},i;
for(i=0;i<4;i++)
{
display1(marks[i]);
}
for(i=0;i<4;i++)
{
display2(&marks[i]);
}
}
void display1(int m)
{
printf("\n%d",m);
}

void display2(int *n)
{
printf("\n%d",*n);

}
