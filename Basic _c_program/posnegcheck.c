#include<stdio.h>
int main(void)
{
    int num;
    printf("enter any number: ");
    scanf("%d",&num);

    if(num>0)
    {
        printf("the number is positive");
    }
    else if(num<0)
    {
        printf("the number is negetive");

    }
    else
        printf("THE NUMBER IS ZERO");
    return 0;
    
}