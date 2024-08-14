#include<stdio.h>
#include<math.h>
int main ()
{
    double base,exponent,result;

    printf("Enter the base : ");
    scanf("%lf",&base);

    printf("Enter the exponent : ");
    scanf("%lf",&exponent);

    result=pow(base,exponent);

    printf("The result is : %.2lf",result);
    
    return 0;
}