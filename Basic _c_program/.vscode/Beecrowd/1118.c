#include<stdio.h>
int main ()
{
    int i,y;
    float a[3],x,avg;


    while(1)
    {
        while(1)
        {

            scanf("%f",&x);

            if(x>=0 && x<=10)
            {

                a[i]=x;
                i++;

            }
            else
            {

                printf("nota invalida\n");

            }
            if(i>1)
            {
                break;
            }

        }
        avg=(a[0]+a[1])/(float)2;
        printf("media = %.2f\n",avg);

        i=0;

        while(1)
        {
            scanf("%d",&y);
            printf("novo calculo (1-sim 2-nao)\n");

            if(y==1 || y==2)
                break;
        }m
        if(y==1)
            continue;
        else
            break;
    }
    return 0;

}
if you need any help you should call me up 

