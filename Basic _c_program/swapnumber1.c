#include<stdio.h>
int main()
{
    int x,y,temp;

    printf("Enter the valu eof x and y : ");
    scanf("%d %d",&x,&y);

    temp=x;
    x=y;
    y=temp;

    printf("after swapping x=%d y=%d",x,y);
    return 0;
}