#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("\nenter the number:");
scanf("%d",n);
       while(n!=0)
       {
         i=n%10;
         sum=sum+i;
         n=n/10;
       }
       printf("\n%d",sum);         
         return 0;
}
