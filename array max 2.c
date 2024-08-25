#include<stdio.h>
int main()
{
    int a[7]={-99,45,100,37,89,-327,245};
    int i,max=0;
    for(i=0;i<7;i++)
    {
        printf("\n%d",a[i]);
        if (a[i]>max)

        max=a[i];
    }
    printf("\n%d",max);
}


