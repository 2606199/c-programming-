#include<stdio.h>
#include<string.h>
void main()
{
    char a[50],b[50],ch;
    int i,j=0,l1,l2;
    printf("Enter string.");
    gets(a);
    printf("Enter elements which you want to  delete.");
    scanf("%c",&ch);
    l1=strlen(a);
  for(i=0;i<l1;i++)
  {
      if(a[i]!=ch)
      {
        b[j]=a[i];
        j++;
     }
}
  b[j]='\0';
  for(j=0;b[j]!='\0';j++)
  {
      printf("%c",b[j]);
  }
}
