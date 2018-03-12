#include<stdio.h>
int main()
{
int n,t1=0,t2=1,i,temp;
printf("\nenter the number:");
scanf("%d",&n);
printf("\nfibonacci series\n");
for(i=0;i<n;i++)
{
printf("\n%d",t1);
temp=t1+t2;
t1=t2;
t2=temp;
}
return 0;
}
