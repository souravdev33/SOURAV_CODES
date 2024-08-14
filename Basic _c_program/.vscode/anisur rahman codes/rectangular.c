#include<stdio.h>
int main()
{
    float length,width,area;

    printf("enter the value of length : ");
    scanf("%f",&length);

    printf("enter the value of width : ");
    scanf("%f",&width);

    area=width*length;

    printf("the area of the rectangle is : %f",area);
    return 0;

}