#include<stdio.h>
int main()
{
int x=10,y=20;
int *p1,*p2;
 p1=&x;
 p2=&y;
int sum=*p1+*p2;
printf("%p\n",*p1);
printf("%p\n",p1);
printf("%d",sum);




}
