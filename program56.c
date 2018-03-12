#include<stdio.h>
int main()
{
char a[10];
int i,flag1=0,flag2=0;
printf("\nenter the string:");
scanf("%s",a);
for(i=0;a[i]!='\0';++i)
{
if(((a[i]>=65)&&(a[i]<=90))||((a[i]>=97)&&(a[i]<=122)))
{
flag1=1;
}
else if((a[i]>=48)&&(a[i]<=57))
{
flag2=1;
}
}
if((flag1==1)&&(flag2==1))
{
printf("\nthe string contain both alphabet and number.");
}
return 0;
}
