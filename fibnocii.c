#include<stdio.h>
int fibnocii(int);
int main()
{
    int i,n;
    printf("enter the number ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d",fibnocii(i));
    }

}
int fibnocii(int n)
{
    if(n==0)
    return 0;
    else if (n==1)
    {
        return 1;
    }
    else
    {
        return fibnocii(n-1)+fibnocii(n-2);
    }
    
}