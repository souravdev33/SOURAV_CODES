#include<stdio.h>
int main()
{
    char upper;

    printf("Enter an uppercase letter : ");
    scanf("%c",&upper);

    printf("The lowercase letter is :%c",tolower(upper));

    return 0;

}
