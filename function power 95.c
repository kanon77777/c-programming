#include<stdio.h>
void calculate power (double a,double b)
{
    int i;result=1;
    for(i=1;i<=b;i++)
    {
        result=result*a;
    }
}
int main()
{
    int a,b,c;
    printf("enter the number a:");
    scaanf("%d",&a);
    printf("enter the nuumber of b:");
    scanf("%d",&b);
    c=calculate power(a,b);
}
