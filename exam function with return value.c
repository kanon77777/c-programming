#include<stdio.h>
int factorial (int n)

{

    int fact;
    if (n==1)
        return (1);
    else
        fact =n*factorial(n-1);
    return (fact);
}
int main()
{
    int n,result;
    printf("enter the value:");
    scanf("%d",&n);
    result=factorial(n);
    printf("result=%d",result);
}
