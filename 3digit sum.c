#include<stdio.h>
int main()
{
    int xyz;
    int a,b,c;
    scanf("%d",&xyz);
    int x=xyz/100;
    int y=(xyz/10)%10;
    int z=(xyz)%10;
    int sum=(x*100+y*10+z)+(y*100+z*10+x)+(z*100+x*10+y);


    printf("%d",sum);
}
