#include<stdio.h>
int main ()

{

    float celcius,fahrenheit;

    printf("enter celcius temp : ");
    scanf("%f",&celcius);

    fahrenheit=((9*celcius)+160)/5;

    printf("fahrenheit : %f",fahrenheit);

    return 0;

}
