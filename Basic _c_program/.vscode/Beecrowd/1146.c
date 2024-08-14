#include<stdio.h>
int main ()
{
    int X,i;

    while(1)
    {
        scanf("%d",&X);
        if(X==0)break;

        printf("1");

        for(i=2;i<=X;i++)
        {
            printf(" %d",i);
        }
        printf("\n");

    }
return 0;
}
