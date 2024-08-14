#include<stdio.h>
#include<string.h>
int main ()
{
    char source[]="YOURONLYLIMITISYOU";
    char target[30];
    int i;

    printf("source = ");
    for(i=0;i<18;i++)
    {
        printf("%c",source[i]);
    }
    for(i=0;i<18;i++)
    {
        target[i]=source[i];
    }
    printf("\n");
    printf("target = ");
    for(i=0;i<18;i++)
    {
        printf("%c",target[i]);

    }
    return 0;
}