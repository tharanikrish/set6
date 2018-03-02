#include<stdio.h>
#include<string.h>
int main()
{
int i,n;
char a[10];
printf("\nentr the number\n");
scanf("%s",a);
n=strlen(a);
for(i=0;i<n;i++)
{
printf("%s\t",a[i]);
}
return 0;
}
