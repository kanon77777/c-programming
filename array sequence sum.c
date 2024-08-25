#include<stdio.h>
int main()
{
    int a[5],b[5],ab[5];
    int i;
    printf("enter the value a:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the value b:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=0;i<5;i++)
    {ab[i]=a[i]+b[i];

        printf("total of value:%d\n",ab[i]);
    }
}
