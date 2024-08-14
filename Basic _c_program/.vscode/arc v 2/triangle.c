#include<stdio.h>
int main ()
{

    int base,height,area;

    printf("enter the base : ");
    scanf("%d",&base);

    printf("enter the height : ");
    scanf("%d",&height);

    area=(float)1/2*base*height;

    printf("Area of the triangle : %d",area);
    return 0;
}
