#include<stdio.h>
int main(void)
{
    char ch;

    printf("enter a letter: ");
    scanf("%c",&ch);

    switch (ch)
    {
    case'a':
    case'e':
    case'i':
    case'o':
    case'u':
    case'A':
    case'E':
    case'I':
    case'O':
    case'U':

        printf("vowel\n");
        break;
    
    default:
        printf("consonant\n");
    }

    return 0;

}