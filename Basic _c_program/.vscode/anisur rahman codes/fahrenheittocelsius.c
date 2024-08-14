#include<stdio.h>
int main()
{
    float celsius,fahrenheit;

    printf("enter the temperature in fahrenheit : ");
    scanf("%f",&fahrenheit);

    celsius=(5*fahrenheit-160)/9;

    printf("the temperature in celsius is :%f",celsius);
    return 0;




}
