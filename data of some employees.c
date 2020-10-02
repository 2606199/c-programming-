#include<stdio.h>
struct emp
{
char name[30];
int Id;
float salary;
};
void main()
{
int i;
struct emp e[3];

printf("Enter all details of employee.");
for(i=0;i<3;i++)
{
    scanf("%s\n%d\n%f",e[i].name,&e[i].Id,&e[i].salary);
}
printf("employees whose salary is more than 200000.");
for(i=0;i<3;i++)
{
if(e[i].salary>200000)
printf("\nName :%s\nId no.:%d\n",e[i].name,e[i].Id);
}
}
