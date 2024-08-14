#include<stdio.h>
int main ()
{
    char lower;
    printf("enter any lowercase letter: ");
    scanf("%c",&lower);

    printf("the uppercase letter is = %c",lower-32);
    return 0;
}