#include<stdio.h>
int main()
{
    FILE *file;
    int i;
    file= fopen("sample.txt","w");
    if (file==NULL)
    {
        printf("not");
    }
    else
    {
        printf("created\n");
    }

    char a[50]="kanon islam";

    fputs(a,file);
        fprintf(file,"%s",a);
        for(i=0;i<=5;i++)
        {
            fputc(a[i],file);
        }
    fclose(file);

}
