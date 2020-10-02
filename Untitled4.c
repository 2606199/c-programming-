 #include<stdio.h>
void main()
{
float bs,gs,ha,da;
printf("enter basic salary of Ramesh");
scanf("%f",&bs);
da=bs-0.4*bs;
ha=bs-0.2*bs;
gs=da+ha;
printf("gross salary is %f",gs);
}

