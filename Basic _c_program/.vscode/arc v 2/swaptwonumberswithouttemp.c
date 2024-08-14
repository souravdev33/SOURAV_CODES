#include<stdio.h>
int main ()
{
    int num1,num2;

    printf("enter two numbers :");
    scanf("%d %d",&num1,&num2);

    num1=num1-num2;
    num2=num1+num2;
    num1=num2-num1;

    printf("after swapping\nNum1=%d\nNum2=%d",num1,num2);

    return 0;
}

