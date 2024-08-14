#include<stdio.h>
int main()
{
    char ch,a,A,z,Z;
    printf("enter a character : ");
    scanf("%c",&ch);

    if(ch>A && ch<Z)
    {
        printf("it is a character");

    }
    else if(ch>a && ch<z)
    {
        printf("it is a charracter");

    }
    else
        printf("not a character ");

    return 0;
}