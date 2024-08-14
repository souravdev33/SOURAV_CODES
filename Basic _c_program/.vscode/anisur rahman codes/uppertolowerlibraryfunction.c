#include<stdio.h>
int main()
{
    char lower,upper;
    printf("enter a uppercase letter: ");
    scanf("%c",&upper);

    lower= tolower(upper);
    printf("the lowercase letter is = %c",lower);
    return 0;
}