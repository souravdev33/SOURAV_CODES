#include<stdio.h>
struct point{
    int x;
    int y;

};
void print(struct point *p){
    printf("%d %d\n",p->x,p->y);
}

int main ()
{
   
    struct point p1={30,50};
    struct point p2={60,70};
    print(&p1);
    print(&p2);
}