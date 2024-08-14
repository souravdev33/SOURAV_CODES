#include<stdio.h>
int main ()
{

    int X,Y,temp,i;

    scanf("%d",&X);
    scanf("%d",&Y);

    if(X>Y)
    {
        temp=X;
        X=Y;
        Y=temp;
    }

    for(i=X+1;i<Y;i++)
    {

        if(i%5==2 || i%5==3)
        {

            printf("%d\n",i);
        }
    }


}
