#include<stdio.h>
int main()
{
    int num1,num2;
    float sum,avg;
    printf("enter two numbers : ");
    scanf("%d %d",&num1,&num2);
    
    sum=num1+num2;
    avg=(sum)/2;

    printf("the sum is =%f\n",sum);

    printf("the average is = %f",avg);


    return 0;
}