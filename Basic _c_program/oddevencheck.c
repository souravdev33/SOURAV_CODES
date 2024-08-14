#include<stdio.h>
int main (void)
{
    int num;
    printf("enter any number: ");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("the number is even");
    }
    else
    printf("the number is odd");
    return 0;




}