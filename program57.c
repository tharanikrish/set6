#include<stdio.h>
int main()
{
int n1,n2,temp=0;
printf("\nenter the numbers:");
scanf("%d%d",&n1,&n2);
temp=n1;
n1=n2;
n2=temp;
printf("\n%d %d",n1,n2);
return 0;
}
