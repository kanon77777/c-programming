#include<stdio.h>
int main()
{
    int a[3];
    a[0]=101;
    a[2]=202;
    a[2]=303;
    int x=a[1]+a[2];
    printf("d",x);
    a[2]=222;
     x=a[1]+a[2];
    printf("d",x);
}
