#include<stdio.h>
int main ()
{
    int base,exponent,result=1,i;

    printf("Enter the base and exponent : ");
    scanf("%d %d",&base,&exponent);

    for(i=1;i<=exponent;i++)
    {
        result=result*base;
    }
    printf("The result is : %d",result);
    return 0;
}