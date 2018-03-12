#include<stdio.h>
int main()
{
int n1,n2;
printf("\nenter the numbers:");
scanf("%d%d",&n1,&n2);
n1=n1^n2;
n2=n1^n2;
n1=n1^n2;
printf("\n%d %d",n1,n2);
return 0;
}
