#include<stdio.h>
int main()
{
    char ch;
    printf("enter any character : ");
    scanf("%c",&ch);

    switch (ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("vowel\n");
        break;

        default:
            printf("not a valid character");
    }

}