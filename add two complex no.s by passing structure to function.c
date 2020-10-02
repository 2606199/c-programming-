typedef struct complex
{
float real,imag;
}complex;
 complex add(complex n1,complex n2);
void main()
{complex n1,n2,result;
printf("Enter first complex no.");
scanf("%f%f",&n1.real,&n1.imag);
printf("Enter second complex no.");
scanf("%f%f",&n2.real,&n2.imag);
result=add(n1,n2);
printf("sum=%.1f+%.1fi",result.real,result.imag);
}
complex add(complex n1,complex n2)
{
complex temp;
temp.real=n1.real+n2.real;
temp.imag=n1.real+n2.real;
return (temp);
}
