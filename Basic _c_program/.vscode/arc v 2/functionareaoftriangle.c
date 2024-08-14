#include<stdio.h>

double trianglearea(double base,double height)
{
    return (0.5*base*height);
}

int main ()
{
    double base,height,area;
    printf("Enter the base and height : ");
    scanf("%lf %lf",&base,&height);

    area=trianglearea(base,height);

    printf("The area of the triangle is : %lf",area);
    
}