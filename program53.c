#include<stdio.h>
#include<string.h>
int main()
{
int i,n,temp;
char a[10];
printf("\nenter the number:);
scanf("%s",a);
n=strlen(a);
temp=a[0];
for(i=0;i<n;i++)
{
printf("\n%c"temp+a[i]);
}
return 0;
}
