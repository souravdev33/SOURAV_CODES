#include<stdio.h>
int main ()
{
    char s[30];
    int age;
    FILE *file;

    file=fopen("test.txt","a");

    if(file==NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("File is opened\n");

        printf("Eneter your name : ");
        gets(s);

        printf("Enter your age : ");
        scanf("%d",&age);

        fprintf(file,"Name = %s   Age = %d\n",s,age);
        printf("File is written successfully");

        fclose(file);
    }    
}