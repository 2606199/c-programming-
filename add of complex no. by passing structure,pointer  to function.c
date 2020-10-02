#include<stdio.h>
struct add
{
int real,imag;
};
void complexadd(struct add,struct add,struct add *);
void main()
{
struct add c1,c2,com;
printf("Enter first complex no.: ");
scanf("%d%d",&c1.real,&c1.imag);
printf("Enter second complex no.: ");
scanf("%d%d",&c2.real,&c2.imag);
complexadd(c1,c2,&com);
printf("sum=%d+%di",com.real,com.imag);
}
complexadd(struct add n1,struct add n2,struct add *z)
{
z->real=n1.real+n2.real;
z->imag=n1.imag+n2.imag;
}
