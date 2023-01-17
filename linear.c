find the element of an array using linear search
#include<stdio.h>
int main()
{
int a[10],i,n,flag=0;
printf("enter the size of array");
scanf("%d",&n);
printf("enter the elements of array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the element to be searched");
scanf("%d",&n);
for(i=0;i<n;i++)
{
if(a[i]==n)
{
flag=1;
break;
}
}
if(flag==1)
{
printf("element found");
}
else
{
printf("element not found");
}
return 0;
}