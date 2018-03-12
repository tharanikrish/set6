#include<stdio.h>
int main()
{
int a[10],i,temp;
printf("\nenter 10 numbers:");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
temp=a[0];
for(i=0;i<10;i++)
{
if(a[i]>temp)
{
  temp=a[i];
}
}  
printf("\n%d",a[i]);
return 0;
}
