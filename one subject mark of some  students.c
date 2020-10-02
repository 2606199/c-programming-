#include<stdio.h>
struct student
{
int roll_no;
char name[30];
int marks;
};
void main()
{
int i,n,j;
printf("Enter no. of students.");
scanf("%d",&n);
struct student s[n];
printf("Enter details of students.");
for(i=0;i<n;i++)
{
scanf("%d%s%d",&s[i].roll_no,s[i].name,&s[i].marks);
}
for(i=0;i<n;i++)
{
printf("\nName:%s\nRoll no.:%d\nmarks:%d",s[i].name,s[i].roll_no,s[i].marks);
}
}
