#include<stdio.h>
int compare (int x,int y)
{
    if (x>y)
        printf("maximum");
    else
        printf("minimum");
}
int main()
{
    int x,y;
    printf("enter the number:" );
    scanf("%d,%d",&x,&y);
    int result=compare(x,y);

}
