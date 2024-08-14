#include<stdio.h>
int main()
{
    int num1,num2,num3;
    float sum,avg;
    printf("enter three numbers : ");
    scanf("%d %d %d",&num1,&num2,&num3);
    
    sum=num1+num2+num3;
    avg=sum/3;

    printf("the sum is :%f\n",sum);
    printf("the average is : %f\n",avg);

    return 0;
}