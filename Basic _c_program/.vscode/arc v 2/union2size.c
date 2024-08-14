#include<stdio.h>

union test1
{
    int x;
    int y;
};
union test2
{
    char c[30];
    double y;
};
union test3
{
    float a;
    int b;
};

struct test4
{
    int t;
    char a[45];
};
int main ()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;
    struct test4 t4;

    printf("Sizeof(test1) : %d\n",sizeof(t1));
    printf("Sizeof(test2) : %d\n",sizeof(t2));
    printf("Sizeof(test3) : %d\n",sizeof(t3));
    printf("Sizeof(test4) : %d\n",sizeof(t4));
    
}


