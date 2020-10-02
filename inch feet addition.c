#include<stdio.h>
struct add
{
int feet;
int inch;
};
void main()
{
struct add s1,s2,s3;
printf("Enter two distances in inch feet system.");
printf("Enter first distance.");
scanf("%d%d",&s1.feet,&s1.inch);
printf("Enter second distance.");
scanf("%d%d",&s2.feet,&s2.inch);
s3.feet=s2.feet+s1.feet;
s3.inch=s1.inch+s2.inch;
if(s3.inch>12)
{
    s3.feet=(s3.inch/12)+s3.feet;

s3.inch=s3.inch%12;

}
printf("Sum of two distance=%d'  %.1d\"",s3.feet,s3.inch);

}
