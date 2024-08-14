#include<stdio.h>
int main()
{
    char upper;
    printf("enter any uppercase letter: ");
    scanf("%c",&upper);

    printf("the lowercase letyter is =%c",upper+32);
    return 0;
}