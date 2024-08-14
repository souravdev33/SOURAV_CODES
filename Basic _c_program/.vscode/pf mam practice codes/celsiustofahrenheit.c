#include<stdio.h>
int main ()
{
    float celsius,fahrenheit;
    printf("enter the temperature in celsius : ");
    scanf("%f",&celsius);

    fahrenheit=(9*celsius+160)/5;
    printf("the temperature in fahrenheit is : %.2f",fahrenheit);

    return 0;
}