#include<stdio.h>
#include<string.h>
int main ()
{
    char s1[]="My name is ";
    char s2[]="Sourav dev";

    strcat(s1,s2);

    printf("String : %s",s1);
    return 0;
}