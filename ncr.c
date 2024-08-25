
#include<stdio.h>
int factorial(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return(fact);
}
int main()
{
    int r,n;
    int ncr;
    printf("enter the number n and r:");
    scanf("%d%d",&n,&r);
    ncr=factorial(n)/(factorial(r)*factorial(n-r));
    printf("ncr factor of %d and %d:%d",n,r,ncr);
    return 0;
}
