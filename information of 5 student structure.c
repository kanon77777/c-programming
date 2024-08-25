#include<stdio.h>
struct student
{
    char name;
    int roll;

};

int main()
{
    struct student s[5];
    int i;
    printf("enter the student record:\n");
    for (i=0;i<5;i++)
    {
        printf("name:");
        scanf("%s",&s[i].name);
        printf("roll:");
        scanf("%d",&s[i].roll);
    }
    for (i=1;i<=5;i++)
    {
        printf("name:%s",s[i].name);
        printf("roll:%d",s[i].roll);
    }
}
