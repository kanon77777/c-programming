#include<stdio.h>
int main()
{
    int col,row,n;
    printf("enter the number:");
    scanf("%d",n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
            printf(" ");
        for(col=1;col=2*row-1;col++)
            printf("*");
            printf("\n");
    }
     printf("\n");
}
