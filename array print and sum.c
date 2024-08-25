#include<stdio.h>
int main()
{
    int a[10],sum=0;
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the value of array:");
    for(i=0;i<10;i++)
    {
        printf("%d",a[i]);
        sum=sum+a[i]; }

        printf("\nthe sum of value:%d",sum);

}
