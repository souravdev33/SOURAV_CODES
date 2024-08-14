#include<stdio.h>
int main ()
{

    int num1,num2;
    printf("enter two numbers : ");
    scanf("%d %d",&num1,&num2);

    if(num1>num2)
        printf("num1=%d is larger");
    else if(num2>num1)
        printf("num2=%d is larger");
    else
        printf("both are equal");


    return 0;

}
