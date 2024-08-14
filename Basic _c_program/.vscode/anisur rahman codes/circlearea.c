#include<stdio.h>
int main()
{
    float radius,area;
    const float pi=3.14159;

    printf("enter the value of radius : ");
    scanf("%f",&radius);
    area=pi*radius*radius;

    printf("the area of the circle is : %f",area);

    return 0;
}