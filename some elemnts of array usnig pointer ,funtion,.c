 #include<stdio.h>
void sum(int *,int ,int * );
void main()
{
int a[20],n,i,s=0;
printf("Enter the size of array.");
scanf("%d",&n);
printf("Enter the elements of array.");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
sum(a,n,&s);

printf("%d",s);
}

void sum(int *p,int m,int *q)
{
int i;
    for(i=0;i<m;i++)
    {

       *q=*q+*(p+i);

    }



}
