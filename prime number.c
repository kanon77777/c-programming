
#include<stdio.h>
int main()
{
    int i,n,cout=0;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%2==0)
        {
            cout++;
            break;
        }
    }
    if (cout==0)
        printf("prime number");
    else
        printf("not prime number");
}
