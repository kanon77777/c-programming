#include<stdio.h>
int main()
{
    FILE *file;
    char ch;
    file=fopen("test2.txt","w");
    if (file==NULL)
    {
        printf("not");
    }
    else
    {
        printf("created");
        while(!feof(file))
        {
            ch=fgetc(file);
            printf("%c",file);
        }
    }
    fclose(file);
}
