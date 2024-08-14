#include<stdio.h>
int main ()
{
    float a,b,c,discriminant,x1,x2;

    printf("enter the values of a b c : ");
    scanf("%f %f %f",&a,&b,&c);

    discriminant=sqrt(b*b-4*a*c);

    x1=(-b+discriminant)/(2*a);
    x2=(-b-discriminant)/(2*a);

    printf("x1 :%f\n",x1);
    printf("x2 :%f",x2);

    return 0;
}

