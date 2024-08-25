#include<stdio.h>
int main()
{
    int i ,a[100],sum=0,n;
    float average;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=1;i<=n;i++)
    {
    sum=sum+a[i];}
    average=sum/n;
    printf("sum:%d\n",sum);
    printf("average:%f",average);

}
