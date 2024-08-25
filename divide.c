#include<stdio.h>
int main()
{
    int a,b,x,y;
    scanf("%d%d",&a,&b);
    x=a/b;
    y=a%b;
    double z=(1.0*a/b);
    printf("%d %d %lf",x,y,z);
}
