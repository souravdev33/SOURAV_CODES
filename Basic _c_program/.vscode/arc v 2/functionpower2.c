#include<stdio.h>

double calculatepower(double base,double exponent)
{
    double result=1,i;
    for(i=1;i<=exponent;i++)
    {
        result=result*base;
    }
    printf("The result is : %.2lf",result);
}
int main ()
{
    int base,exponent;

    printf("Enter the base and exponent : ");
    scanf("%d %d",&base,&exponent);

    calculatepower(base,exponent);

}