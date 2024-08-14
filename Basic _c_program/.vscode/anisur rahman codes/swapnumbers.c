#include<stdio.h>
int main ()
{

    int x,y,temp;

    printf("enter two numbers : ");
    scanf("%d %d ",&x,&y);

    temp=x;
    x=y;
    y=temp;

    printf("after swapping x=%d\n and y=%d\n",x,y);
    return 0;
}
