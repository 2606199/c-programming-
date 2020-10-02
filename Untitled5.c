#include<stdio.h>
void main()
{
float dkm,m,cm,in;
printf("enter the distance between two cities");
scanf("%f",&dkm);
m=dkm*1000;
printf("\ndistance in m %f",m);
cm=dkm*100000;
printf("\ndistance in cm is %f",cm);
in=(dkm*100000)/2.54;
printf("\ndistance in in is %f",in);
}
