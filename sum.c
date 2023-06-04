#include<stdio.h>
int main()
{
    int n,i,sum=0,A[100];
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+A[i];
    }
   // for(i=0;i<n;i++)
   // {
        printf("the sum is %d",sum);
   // }
    return 0;

    }