#include<stdio.h>
struct student
{
int rno;
char name[30];
float percentage;
};
void main()
{
struct student s;
printf("Enter roll no.");
scanf("%d",&s.rno);
printf("Enter name");
scanf("%s",s.name);
printf("Enter percentage.");
scanf("%f",&s.percentage);
display1(s.rno,s.name,s.percentage);
display2(s);
display3(&s);
}
display1(int a,char name[],int c)
{
printf("Roll no:%d\nName:%s\npercentage:%f",a,name,c);
}
display2(struct student s1)
{
printf("\nRoll no:%d\nName:%s\npercentage:%f",s1.rno,s1.name,s1.percentage);
}
display3(struct student *p)
{
printf("\nRoll no:%d\nName:%s\npercentage:%f",p->rno,p->name,p->percentage);
}
