#include<stdio.h>
struct student
{
int roll_no;
char name[20];
float percentage;
};
void main()
{
    struct student s;
struct student *p;
p=&s;
printf("Enter roll no.");
scanf("%d",&p->roll_no);
printf("Enter name");
scanf("%s",&p->name);
printf("Enter percentage");
scanf("%f",&p->percentage);
printf("Roll no.:%d\nName:%s\npercentage:%f",p->roll_no,p->name,p->percentage);

}
