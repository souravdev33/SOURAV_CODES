#include<stdio.h>
int main()
{
    float radius,perimeter,area;
    const float pi=3.14159;

    printf("Enter the value of radius: ");
    scanf("%f",&radius);

    perimeter=2*pi*radius;
    area=pi*radius*radius;
    printf("Perimeter=%f\n",perimeter);
    printf("Area=%f\n", area);
    return 0;
}