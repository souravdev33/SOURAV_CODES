#include<stdio.h>
int main ()
{

    int num1,num2;
    float result;

    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);

    result=num1+num2;
    printf("the sum is = %f\n",result);

    result=num1-num2;
    printf("the sub is = %f\n",result);

    result=num1*num2;
    printf("the mul is = %f\n",result);

    result=num1/num2;
    printf("the div is = %f\n",result);

    result=num1%num2;
    printf("the rem is = %f\n",result);

    return 0;


}



