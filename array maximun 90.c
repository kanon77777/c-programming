#include<stdio.h>
int main()
{
    int i,n,a[100];
    printf("enter the value:");
    scanf("%d",&n);
    for(i=1;i<=5;i++)
        scanf("%d",&a[i]);
        int max=a[1];
        for(i=1;i<=5;i++)
        {
            if (max<a[i]);
            max=a[i];
        }
        printf("%d",max);

}
