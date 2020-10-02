#include<stdio.h>
struct date
{
int day,month,year;
};
struct details
{
char name[30];
int code;
int price,quantity;
struct date mfg;
};
void main()
{
int n,i,sum=0;
printf("Enter no. of itmes:");
scanf("%d",&n);
struct  details item[n];
for(i=0;i<n;i++)
{
printf("\nEnter Name of item.:");
scanf("%s",item[i].name);
printf("\nEnter code of your item.:");
scanf("%d",&item[i].code);
printf("\nEnter quantity.:");
scanf("%d",&item[i].quantity);
printf("\nEnter price of one.:");
scanf("%d",&item[i].price);
printf("\nEnter manufacturing date.:");
scanf("%d-%d-%d",&item[i].mfg.day,&item[i].mfg.month,&item[i].mfg.year);
}
printf("----------------------------YOUR INVENTORY---------------------------");
for(i=0;i<n;i++)
{
printf("\nITEM NAME: %s\nITEM CODE: %d\nITEM QUANTITY: %d\nITEM PRICE:%d\nITEM MANUFACTURING DATE:  %d:%d:%d\n",item[i].name,item[i].code,item[i].quantity,((item[i].price)*(item[i].quantity)),item[i].mfg.day,item[i].mfg.month,item[i].mfg.year);
}
for(i=0;i<n;i++)
{
    sum=sum+((item[i].price)*(item[i].quantity));
}
printf("TOTAL BILL=%d\n",sum);
printf("----------------------------THANK YOU---------------------------");




}
