#include<stdio.h>
int main()
{
    int n, i,sum=0;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if (i%2!=0)
            sum=sum+i;
    }
    printf("sum of number:%d",sum);
}
?//for(i=1;i<=n;i=i+2)
//sum=sum+i;
