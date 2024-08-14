#include<stdio.h>
int main()
{

    int num1,num2,num3;
    printf("enter three numbers : ");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1>num2 && num1>num3)
        printf("Num1=%d is larger");
    else if(num2>num1 && num2>num3)
        printf("Num2=%d is larger");
    else if(num3>num1 && num3>num2)
        printf("Num3=%d is larger");
    else
        printf("all numbers are equal");

    return 0;
}
