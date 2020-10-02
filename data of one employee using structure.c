#include<stdio.h>
struct emp
{
int ID_no;
char name[20];
float salary;
};
void main()
{
struct emp e={19011355,"Jitendra  singh",100000};
printf("Details of employee.\n");
printf("Name : %s\nID is :%d\nsalary is: %f \nsize of structure :%d\n",e.name,e.ID_no,e.salary,sizeof(e));
e.salary=500000;
printf("All details are same except Salary:%f",e.salary);

}
