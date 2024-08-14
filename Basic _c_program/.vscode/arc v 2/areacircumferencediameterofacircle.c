#include<stdio.h>
int main ()
{
    float radius,diameter,circumference,area,Pi=3.1416;

    printf("enter the radius value : ");
    scanf("%f",&radius);


    diameter=2*radius;
    circumference=2*Pi*radius;
    area=Pi*(radius*radius);

    printf("diameter : %f\n",diameter);
    printf("circumference : %f\n",circumference);
    printf("area : %f\n",area);

    return 0;


}
