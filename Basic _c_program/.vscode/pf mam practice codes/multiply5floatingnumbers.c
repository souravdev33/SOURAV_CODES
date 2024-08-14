#include<stdio.h>
int main ()
{
    float n1,n2,n3,n4,n5,result;
    printf("enter 5 floating numbers : ");
    scanf("%f %f %f %f %f",&n1,&n2,&n3,&n4,&n5);

    result=n1*n2*n3*n4*n5;

    printf("the multliplication result is =%f",result);

    return 0;
}