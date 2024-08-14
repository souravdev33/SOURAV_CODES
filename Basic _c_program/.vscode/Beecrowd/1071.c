#include<stdio.h>
int main ()
{
    int X,Y,i,n,temp,sum=0;

    scanf("%d\n",&X);
    scanf("%d",&Y);

    if(X>Y)
    {
        temp=Y;
        Y=X;
        X=temp;
    }
    if(X%2==0)
    {
        X++;
        n=X;
    }
    else
    {
        n=X+2;
    }
    for(i=n;i<Y;i=i+2)
    {
        sum=sum+i;
    }
    printf("%d\n",sum);

return 0;
}
