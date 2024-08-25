#include<stdio.h>
int main()
{
    int a[2][3]={11,12,13,21,22,23};
    printf("%d\n",a[1][2]);
    int y=a[0][0]+a[1][2];
    printf("%d",y);
}
