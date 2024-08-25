#include<stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld%lld",&a,&b);
    if (a%b==0)
    {
        long long int x=a/b;
        printf("%lld",x);
    }else
    {
    long long int x=a/b+1;
    printf("%lld",x);
    }
}
