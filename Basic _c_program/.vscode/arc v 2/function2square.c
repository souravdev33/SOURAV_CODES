#include<stdio.h>

int square(int num)
{
    return(num*num);
}
int main()
{
    int num,sq;
    printf("Enter a number : ");
    scanf("%d",&num);

    sq=square(num);

    printf("The result is : %d",sq);
}