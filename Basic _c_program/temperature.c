#include<stdio.h>
int main (void)
{
    float celsius,fahrenheit;

    printf("Enter the celsius temperature: ");

    scanf("%f",&celsius);

    fahrenheit= (celsius*1.8)+32;

    printf("%f\n",fahrenheit);

    return 0;
}
