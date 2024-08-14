#include<stdio.h>
int main ()
{
    float base,height,area;

    printf("enter the values of base and height =  ");
    scanf("%f %f",&base,&height);
    
    area=0.5*base*height;
    printf("the area of the triangle is :%.2f\n",area );
    return 0;
}