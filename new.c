write a c program to find the sum of two numbers using function
#include<stdio.h>
int sum(int a,int b);
int main()
{
int a,b,c;
printf("enter the two numbers");
scanf("%d%d",&a,&b);
c=sum(a,b);
printf("sum of two numbers is %d",c);
return 0;
}
int sum(int a,int b)
{
int c;
c=a+b;
return c;
}
