#include<stdio.h>
int main()
{
    int i,j,n,z=1,k;
    printf("enter the number:");
    scanf("%d",n);
    for(i=1;i<=n;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=z;k++)
        {
            printf("*");
        }
        z=+2;
        printf("\n");
    }
}
