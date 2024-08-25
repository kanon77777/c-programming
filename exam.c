#include<stdio.h>
int mul(int x,int y)
{
    int p;
    p=x*y;
    return (p);
}
int main()
{
    int result=mul (5,10);
    printf("%d",result);
}
