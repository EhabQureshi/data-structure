#include<stdio.h>
int main()
{
    int n,i,a[100],avg;
    float sum=0;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        avg=sum/n;
       // printf("%d \n",avg);

    }
   // avg=sum/n;
    printf("%d \n",avg);

}