#include<stdio.h>
union test
{
    int x,y;
};

int main ()
{
    union test t1;
    t1.x=10;
    printf("X = %d\n",t1.x);
    printf("Y = %d\n",t1.y);

    printf("\n");
    t1.y=20;
    printf("X = %d\n",t1.x);
    printf("Y = %d\n",t1.y);
}
