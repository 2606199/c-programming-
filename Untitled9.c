#include<stdio.h>
#include<math.h>
void  main()
{
int n,r;
printf("enter positive number");
scanf("%d",&n);
if(n<10)
{
    if(n%2==0)

        r=2*n;
        else
            r=n*n;

}
else
{
    if(n%10==0)
        r=n/2;
    else
        r=n;
    }
    printf("%d",r);
    }

