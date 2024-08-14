
#include<stdio.h>
#include<math.h>
int main ()
{
    float a,b,c;
    float x1,x2,root;
    printf("Enter three number a,b,c: ");
    scanf("%f %f %f",&a,&b,&c);
    root=squr(b*b-4*a*c);
    x1=(-b+root)/2*a;
    x2=(-b-root)/2*a;
    printf("x1=%f\n",x1);
    printf("x2=%f\n",x2);
    return 0;
}
