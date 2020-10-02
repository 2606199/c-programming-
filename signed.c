#include<stdio.h>
int pallin(int);
void main()
{
    int n,z;
        printf("Enter any value");

        scanf("%d",&n);

  z=pallin(n);
if(z==n)
    printf("no. is pallindrome");
else
    printf("no. is not pallindrome");

}
int pallin(int x)
{

    int i,rev=0,r,y,n;
    y=x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        r=x%10;
        rev=(rev*10)+r;
        x=x/10;
    }
    return rev;
}

