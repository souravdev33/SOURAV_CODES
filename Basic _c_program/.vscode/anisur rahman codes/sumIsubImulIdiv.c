#include<stdio.h>
int main()  
{
    float num1,num2,result;

    printf("enter 2 numbers : ");
    scanf("%f %f",&num1,&num2);

    result=num1+num2;
    printf("the summation is :%.2f\n",result);

    result=num1-num2;
    printf("the subtraction is :%.2f\n",result);

    result=num1*num2;
    printf("the multiplication is :%.2f\n",result);

    result=num1/num2;
    printf("the divition is :%.2f\n",result);

 
return 0;

}                                                   