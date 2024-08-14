#include<stdio.h>
int main ()
{
    char ch;
    printf("enter any letter : ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z'){
        printf("its a small letter");

    }
    else if(ch>='A' && ch<='Z'){
        printf("its a capital letter");

    }
    else
        printf("its not a letter");
    return 0;
}