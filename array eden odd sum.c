#include<stdio.h>
int main()
{
    int a[5],even_sum=0,odd_sum=0;
    int i;

    for(i=0;i<5;i++)
    {scanf("%d",&a[i]);}
    printf("the value of array:");
    for (i=0;i<5;i++)
    {
        printf("%d", a[i]);
        if (a[i]%2==0)
            even_sum =even_sum+a[i];
        else
            odd_sum=odd_sum+a[i];
    }
    printf("\n sum of even value:%d",even_sum);
    printf("\n sm of odd sum value:%d",odd_sum);

}
