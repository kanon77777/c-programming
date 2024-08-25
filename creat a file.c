#include<stdio.h>
int main()
{
    FILE *file;
    char name[20];
    int roll;
    file =fopen("text.txt", "w");
    if(file==NULL)
    {
        printf("file does not exit");
    }
        else
        {
            printf("the file is open\n");
            printf("enter your name:");

            gets( name);
            fputs(name ,file);
            printf("roll:");
            gets(roll );
            fprintf(file ,"name=%s,roll=%d",name ,roll);

            fclose(file);
        }
    }


