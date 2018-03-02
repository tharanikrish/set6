#include<stdio.h>
int main()
{
int a;
printf("\nenter the number:");
scanf("%d",&a);
if(a%2==1)
--a;
printf("\n%d",a);
return 0;
}
