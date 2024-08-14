#include<stdio.h>
int main()
{
    int num1,num2;
    num1=40;
    num2=70;

    if(num1>num2)
    {
        printf("the maximum value is num1=%d\nthe minimum value is num2=%d",num1,num2);
    }
    else if(num2>num1)
    {
        printf("the maximum value is num2=%d\nthe minimum value is num1=%d",num2,num1);
    }
    else
    {
        printf("both numbers are equal");
    }

return 0;
}
