#include<stdio.h>
int main()
{
 
    int num1,num2;
    float quotient,remainmder;
    printf("enter two numbers : ");
    scanf("%d %d",&num1,&num2);
    
    quotient=num1/num2;
    remainmder=num1%num2;

    printf("the quotient is = %f\n",quotient);
    printf("the remainder is =%f",remainmder);
    return 0;

}