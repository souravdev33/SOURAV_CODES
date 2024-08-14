//program name: find all the roots of a quadratic function.

#include<stdio.h>
#include<math.h>
int main(void)
{
    float a,b,c,x1,x2,discriminanat,real_part,imaginary_part;
    
    printf("Enter the values of a,b,c: ");
    scanf("%f %f %f",&a,&b,&c);
    discriminanat=(b*b-4*a*c);

    if(discriminanat>0)
    {
        x1=(-b+sqrt(discriminanat))/(2*a);
        x2=(-b-sqrt(discriminanat))/(2*a);
        printf("first root= %f\n",x1);
        printf("second root= %f\n",x2);

    }
    else if(discriminanat==0)
    {
        x1=-b/(2*a);
        x2=-b/(2*a);
        printf("first root= %f\n",x1);
        printf("second root= %f\n",x2);

    }
 
    else
    {   
        real_part=(-b)/(2*a);
        imaginary_part=sqrt(discriminanat);
        printf("real_part=%f\n",real_part);
        printf("imaginary_part=%f\n",imaginary_part);
    }
    return 0;

}