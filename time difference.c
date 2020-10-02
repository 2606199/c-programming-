#include<stdio.h>
struct timedifference
{
int hour,minute,second;
}t1,t2,diff;
void main()
{
printf("Enter start time");
scanf("%d%d%d",&t1.hour,&t1.minute,&t1.second);
printf("Enter stop time.");
scanf("%d%d%d",&t2.hour,&t2.minute,&t2.second);
if(t1.second>t2.second)
{
--t2.minute;
t2.second+=60;
}
diff.second=(t2.second)-(t1.second);

if(t1.minute>t2.minute)
{
--t2.hour;
t2.minute+=60;
}
diff.minute=t2.minute-t1.minute;
diff.hour=t2.hour-t1.hour;
printf("difference of time periods=  %d:%d:%d",diff.hour,diff.minute,diff.second);
}
