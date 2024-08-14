#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file;
    char s[30];
    file= fopen("test.txt","w");

    if(file==NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("File is opened");

        printf("Enter your full name : ");
        gets(s);

        fputc(s,file);

        printf("File is written successfully");
        fclose(s);
    }
}
