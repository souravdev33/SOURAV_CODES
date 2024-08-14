#include<stdio.h>
#include<string.h>
int main ()
{
    char source[]="YOURONLYLIMITISYOU";
    char target[40];

    strcpy(target,source);

    printf("source = %s\n",source);
    printf("target = %s\n",target);

    return 0;
}