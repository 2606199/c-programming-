#include<stdio.h>
struct time
{
int hr,min,sec;
};
void difference(struct time ,struct time ,struct time *);
void main()
{
struct time start,stop,diff;
printf("Enter start time.");
scanf("%d%d%d",&start.hr,&start.min,&start.sec);
printf("Enter stop time.");
scanf("%d%d%d",&stop.hr,&stop.min,&stop.sec);
difference(start,stop,&diff);
printf("Difference between start time and stop time = %d:%d:%d",diff.hr,diff.min,diff.sec);
}
void difference(struct time x,struct time y,struct time *z)
{
if(y.sec>x.sec)
{
--x.min;
x.sec+=60;
}
z->sec=x.sec-y.sec;
if(y.min>x.min)
{
--x.hr;
x.min+=60;
}
z->min=x.min-y.min;
z->hr=x.hr-y.hr;

}
