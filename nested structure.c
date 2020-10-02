#include<stdio.h>
struct dob
{
int date;
char month[20];
int year;
};
struct student
{
int id;
char name[30];
struct dob d1;
};
void main()
{
struct student s;
printf("Enter id\n");
scanf("%d",&s.id);
printf("Enter name\n");
scanf("%s",s.name);
printf("Enter date of birth.");
scanf("%d%s%d",&s.d1.date,s.d1.month,&s.d1.year);
printf("\nID no.:%d\nName:%s\ndate of birth:%d/%s/%d",s.id,s.name,s.d1.date,s.d1.month,s.d1.year);

}
