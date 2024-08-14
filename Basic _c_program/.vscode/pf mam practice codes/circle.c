//program name: printing circle's diameter,circumference and area with the help of radius value.

#include<stdio.h>
int main(void)
{
    float radius,diameter,circumference,area;
    const float pi=3.14159;

    printf("Enter the value of radius :" );
    scanf("%f",&radius);

    printf("Diameter:%f\n",diameter=radius*2);

    printf("Circumference:%f\n",circumference=2*pi*radius);

    printf("Area:%f\n",area=pi*radius*radius);

    return 0;
}