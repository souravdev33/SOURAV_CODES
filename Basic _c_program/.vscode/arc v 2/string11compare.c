#include<stdio.h>
#include<string.h>
int main ()
{
    char s1[]="Sourav dev";
    char s2[]="Sourav dev";

    int  compare;
    compare=strcmp(s1,s2);

    if(compare==0)
    {
        printf("Both strings are equal");
    }
    else
        printf("Both strings are not equal");

    return 0;
}