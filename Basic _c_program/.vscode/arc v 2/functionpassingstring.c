#include<stdio.h>

int display(char s[])
{
    int i=0;
    while(s[i]!='\0')
    {
        printf("%c\n",s[i]);
        i++;
    }
}
int main ()
{
    char s[]="Sourav";
    display(s);
}