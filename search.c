#include<stdio.h>
void main()
{
    int a[20],i,n,x;
    printf("Enter the size of array");
    scanf("%d",&n);
    printf("Enter the elements in array");
    for (i=1;i<n;i++)
         scanf("%d",&x);
    for(i=1;i<n;i++)
    if (a[i]==x)
        break;
    if (i<n)
    printf("Element is not found ");
    else
    {
        printf("Element not found");
    }

}