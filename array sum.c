#include<stdio.h>
int main()
{
    int a[10];
    int i ,sum=0;
    printf("enter the value:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<10;i++)
        {
            sum=sum+a[i];

        }
printf("sum of the array:%d",a[i]);

}
