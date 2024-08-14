#include<stdio.h>
#include<string.h>
int main ()
{
    char s[50];
    int i,capital,small,digit;

    printf("Enter a string : ");
    gets(s);

    while(s[i]!='\0')
    {
        if(s[i]>=65 && s[i]<=90)
            capital++;
        else if(s[i]>=97 && s[i]<=122)
            small++;
        else if(s[i]>=48 && s[i]<=57)
            digit++;

        i++;
    }
    printf("The number of capital letter : %d\n",capital);
    printf("The number of small letter : %d\n",small);
    printf("The number of digit is : %d\n",digit);

    return 0;
}