#include<stdio.h>
int main ()
{
    int i,X,Y,N;
    float x;

    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d %d",&X,&Y);
        if(Y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            x=X/(float)Y;
            printf("%.1f\n",x);

        }
    }
return 0;

}