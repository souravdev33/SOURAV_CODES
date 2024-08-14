#include<stdio.h>
int main ()
{
    float celsius,fahrenheit;

    printf("enter the celsius value : ");
    scanf("%f",&celsius);

    fahrenheit=(9*celsius+160)/5;

    printf("the fahrenheit temperature is : %f",fahrenheit);

    return 0;
}