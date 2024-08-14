#include<stdio.h>
int main ()
{
    int x=8;
    int *p;

    p=&x;

    printf("The address of the variable :%d\n",x);
    printf("The address of x is : %d\n",&x);
    printf("The value of pointer is : %d\n",p);
    printf("The address of pointer : %d\n",&p);
    printf("The value of pointer refering : %d\n",*p);

    return 0;
}