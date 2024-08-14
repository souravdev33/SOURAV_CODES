#include<stdio.h>
#include<string.h>
int main ()
{
    char s[30]="My name is dev";

    strupr(s);
    printf("UPPER = %s\n",s);

    strlwr(s);
    printf("LOWER = %s",s);
    return 0;
}