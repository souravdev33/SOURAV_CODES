#include<stdio.h>
int main ()
{

    char ch;
    printf("Enter any character : ");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z')
        printf("small letter");
    else if(ch>='A' && ch<='Z')
        printf("Capital letter");
    else
        printf("Not a letter");

    return 0;
}
