#include<stdio.h>
int main ()
{

    char oper;
    float num1,num2;

    printf("Enter an operator +,-,*,/ : ");
    scanf("%c",&oper);


    printf("enter two numbers: ");
    scanf("%f %f",&num1,&num2);

    switch(oper)
    {

    case '+':
        printf("%.2f+%.2f=%.2f",num1,num2,num1+num2);
        break;
    case '-':
        printf("%.2f-%.2f=%.2f",num1,num2,num1-num2);
        break;
    case '*':
        printf("%.2f*%.2f=%.2f",num1,num2,num1*num2);
        break;
    case '/':
        printf("%.2f/%.2f=%.2f",num1,num2,num1/num2);
        break;

    default:
        printf("not a valid number");


    }
    getch();
return 0;
}
