#include<stdio.h>
int main ()
{
    char ch;
    printf("enter a letter : ");
    scanf("%c",&ch);

    if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
        printf("it is a vowel");
    else if(ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
        printf("it is a vowel");
    else
        printf("it is a consonant");
    return 0;
}
