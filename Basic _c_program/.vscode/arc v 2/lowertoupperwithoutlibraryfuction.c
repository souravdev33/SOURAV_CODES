#include<stdio.h>
int main ()
{

    char lower,upper;

    printf("Enter a lowercase letter : ");
    scanf("%c",&lower);

    upper=lower-32;

    printf("The uppercase letter =%c",upper);

    return 0;


}
