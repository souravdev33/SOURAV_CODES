#include<stdio.h>
int main ()
{
    int i=0;
    float x,a[3],avg;

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

return 0;
}