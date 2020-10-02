#include<stdio.h>
struct global
{
int a,b;
};
void main()
{
struct global g={2,3};
    printf("a=%d\nb=%d\n",g.a,g.b);
check();
}
check()
{

    struct global g={4,5};
    printf("a=%d\nb=%d",g.a,g.b);
}
