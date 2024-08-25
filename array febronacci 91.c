#include<stdio.h>
int main()
{
    int i,n,a[30];
    printf("how many fibonacci number;");
    scanf("%d",&n);
    a[0]=5;
    a[1]=6;
    for(i=2;i<=n;i++)
    {
        a[i]=a[i-1]+a[i-2];

    }
    printf("\n");
    for(i=0;i<=n;i++)
    {
        printf("%d",a[i]);
    }
}
