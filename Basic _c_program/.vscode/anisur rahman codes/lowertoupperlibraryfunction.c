#include<stdio.h>
int main ()
{
    int lower,upper;
    printf("enter a lowercase letter: ");
    scanf("%c",&lower);

    upper= toupper(lower);
    printf("the uppercase letter is =%c",upper);
    getch();
    return 0;

}