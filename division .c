#include<stdio.h>
int main()
{
     int a,b;
    float c;
    printf("enter the value of a:");
    scanf("%d",*&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    c=a/b;
    printf("result:%f",c);
}
