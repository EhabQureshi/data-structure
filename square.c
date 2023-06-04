#include<stdio.h>
int main()
{
    int n , i,A[100],B[100],j;
     printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
        B[j]=A[i]*A[i];
        printf("%d \n",B[j]);
    }
    //printf("%d\n",B[j]);
}