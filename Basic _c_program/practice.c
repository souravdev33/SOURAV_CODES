#include<stdio.h>
int main ()
{
    float num1,num2;
    char oper;

    printf("enter an operator + - * / : ");
    scanf("%c",&oper);

    printf("enter two numbers : ");
    scanf("%f %f",&num1,&num2);

    switch(oper)
    {
        case '+':
        {
            printf("%f + %f = %f",num1,num2,num1+num2);
            break;
        }
        case '-':
        {
            printf("%f - %f = %f",num1,num2,num1-num2);
            break; 
        }
        case '*':
        {
            printf("%f * %f = %f",num1,num2,num1*num2);
            break;
        }
        case '/':
        {
            printf("%f / %f = %f",num1,num2,num1/num2);
            break;
        }
        default:
        {
            printf("not a valid number ");

        }
    }
return 0;
}