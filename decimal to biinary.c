#include<stdio.h>
int main()
{
    int n,i=1,binary=0,r;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%2;
        n=n/2;
        binary=binary+(r*i);
        i=i*10;

    }
    printf("%d",binary);

}
