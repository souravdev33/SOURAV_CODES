#include<stdio.h>
#include<string.h>
int main ()
{
    char s[]="Sourav";
    printf("s = %s\n",s);

    strrev(s);
    printf("s = %s",s);
    return 0;
}