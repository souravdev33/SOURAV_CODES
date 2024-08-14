#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter first number : ");
    scanf("%d",&num1);

    printf("enter second number :");
    scanf("%d",&num2);

    if(num1>num2){
        printf("number 1 is larger");

    }
    else if(num1<num2){
        printf("number 2 is larger");

    }
    else
        printf("both numbers are equal");

    return 0;
}
