#include<stdio.h>
int main ()
{
    int x=10,y=15,z=20;

    int *ptr;

    ptr=&x;
    printf("X = %d\n",*ptr);

    
    ptr=&y;
    printf("Y = %d\n",*ptr);

    
    ptr=&z;
    printf("Z = %d\n",*ptr);

    return 0;
}