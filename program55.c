#include<stdio.h>
int main()
{
int n,m,mul;
printf("\nenter the two numbers:");
scanf("%d%d",&n,&m);
mul=n*m;
if(mul%2==0)
{
printf("\neven");
}
else
printf("\nodd");
return 0;
}
