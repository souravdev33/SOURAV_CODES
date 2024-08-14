#include<stdio.h>
#include<string.h>
int main ()
{
    char s[]="youronlylimitisyou";
    int i=0,count=0;

    while(s[i]!='\0')
    {
        count++;
        i++;
    }
    printf("The length of the string : %d",count);

    return 0;
}