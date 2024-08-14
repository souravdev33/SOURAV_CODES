#include<stdio.h>
int main ()
{
    int num1,num2,sum,product,difference,quotient,remainders;

    printf("enter two numbers : ");
    scanf("%d %d",&num1,&num2);

    sum=num1+num2;
    product=num1*num2;
    difference=num1-num2;
    quotient=num1/num2;
    remainders=num1%num2;

    printf("sum=%d\nproduct=%d\ndifference=%d\nquotient=%d\nremainders=%d",sum,product,difference,quotient,remainders);
    return 0;
}