#include<stdio.h>
#include<string.h>
int main ()
{
    char s[50],ch;
    int i,capital,small,digit;

    printf("Enter a string : ");
    gets(s);

    i=capital=small=digit=0;

    while((ch=s[i])!='\0')
    {
        if(ch>='a' && ch<='z')
            small++;
        else if(ch>='A' && ch<='Z')
            capital++;
        else if(ch>='0' && ch<='9')
            digit++;
        i++;
    }
    printf("The number of capital letter : %d\n",capital);
    printf("The number of small letter : %d\n",small);
    printf("The number of digit is : %d\n",digit);

    return 0;
}
    