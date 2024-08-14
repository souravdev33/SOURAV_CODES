#include<stdio.h>
int main ()
{
    char ch[35];
    FILE *file;
    file = fopen("test.txt","r");

    if(file==NULL)
    {
        printf("File does not exist");

    }
    else 
    {
        printf("File is opened\n");

        while (!feof(file))
        {
            fgets(ch,28,file);
            printf("%s\n",ch);
        }
        
    }
}