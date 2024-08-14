#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter 3 numbers: ");
    scanf("%d%d%d",&num1,&num2,&num3);
 
    if(num1>num2 && num1>num3)
    {  
        printf("num1 is larger");

    }
    else if(num2>num1 && num2>num3)
    {
        printf("num2 is larger");

    }
    else if(num3>num1 && num3>num2)
    {
        printf("num3 is larger");

    }
    else
        printf("numbers are equal");

    return 0;
}

