#include<stdio.h>
int main ()
{
    char ch;
    FILE *file;

    file=fopen("test.txt","r");

    if(file==NULL)
    {
        printf("File does not exist");

    }
    else
    {
        printf("File is opened\n");
        while(!feof(file))
        {
            ch= fgetc(file);
            printf("%c",ch);
        }
        fclose(file);

   }
}