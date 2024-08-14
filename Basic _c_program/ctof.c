#include<stdio.h>
int main(void)
{
    float celsius,fahrenheit;
    scanf("%f", &celsius);
    fahrenheit=(9*celsius+160)/5;
    printf("the fahrenheit temperture is%f",fahrenheit);
    return 0;
}