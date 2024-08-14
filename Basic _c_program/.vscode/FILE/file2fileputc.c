#include<stdio.h>
#include<string.h>
int main ()
{

    char s[30]="Sourav is a good boy";
    int i,length=strlen(s);
    FILE *file;
    file = fopen("test.txt","w");


    if(file == NULL)
    {
        printf("File does not exist");
    
    }
    else
    {
        printf("File is opened\n");
        for(i=0;i<length;i++)
        {
            fputc(s[i],file);
        }
        printf("File is written successfully");


    }
    
}