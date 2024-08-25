#include<stdio.h>
int main()
{
    int n,first=0,secound=1,fibo,count=0;
    printf("enter the rang:");
    scanf("%d",&n);
    while(count<n)
    {
        if(count<=1){
        fibo=count;}
        else
        {
            fibo=first+secound;
            first=secound;
            secound=fibo;
        }

        printf("%d ",fibo);
        count++;
}

}
