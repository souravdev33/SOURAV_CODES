#include<stdio.h>

int main()
{
    FILE *file;
    file = fopen("test.txt","w");
    char name[30];


    if(file==NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("File is opened\n");

        printf("Enter your full name : ");
        gets(name);

        fputs(name,file);

        printf("File is written successfully");
        fclose(file);
    }
}