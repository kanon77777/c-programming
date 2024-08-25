#include<stdio.h>
int main()
{
    int a[5];
    int i,sum=0,average;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
        average=sum/5;
    }
    printf("the avarage value:");
    printf("%d\n",average);
    if (average>100)
    {
        printf("%d",average);
    }

}
