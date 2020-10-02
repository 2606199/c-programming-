#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,m,sum=0;
    printf("enter any positive no.");
    scanf("%d",&n);
    for(i=1;i<=n-1;i++)
    {
        m=n%i;
        if(m==0)
        sum=sum+i;
    }
    if(sum==n)
    printf("no. is perfect");
    else
        printf("no. is non perfect");

}
