//program name: convert celsius temperature to fahrenheit temperature.

#include<stdio.h>
int main(void)
{
    float celsius,fahrenheit;

    printf("Enter the current temperature:" );

    scanf("%f", &celsius);
    
    fahrenheit=((9*celsius)+160)/5;

    printf("Fahrenheit temperature is%f\n", fahrenheit);
    
    return 0;           
    
}