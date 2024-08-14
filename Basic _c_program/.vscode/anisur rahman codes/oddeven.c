#include<stdio.h>
int main ()
{
    int num;
    printf("enter a number :  ");
    scanf("%d",&num);

    if(num%2==0)
    printf("the number is a even number");
    else
    printf("the number is a odd number");

    return 0;
}