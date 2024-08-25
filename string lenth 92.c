#include<stdio.h>
int main()
{
    char s1[]="kadirul islam";
    int i=0,len=0;
    while(s1[i]!='\0')
    {
        i++;
        len++;
    }
    printf("lenth:%d",len);
}
