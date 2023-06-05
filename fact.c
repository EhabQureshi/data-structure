#include<stdio.h>
int factorial(int );
int main()
{
    int fact ,n=3,t;
   t= factorial(n);
    printf("the factorial of %d is %d",n,t);
   
}
int factorial(int x)
{
    int temp;
    if(x==0)
    {
        return 1;
    }
    else
    temp=x*factorial(x-1);
    return temp;
}