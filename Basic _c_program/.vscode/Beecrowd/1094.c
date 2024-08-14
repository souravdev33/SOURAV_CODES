#include<stdio.h>
int main ()
{
    int i,rat=0,frog=0,rabbit=0,sum=0,n,N;
    char c;
    float x,y,z;

    scanf("%d",&N);

    for(i=1; i<=N; i++)
    {
        scanf("%d %c\n",&n,&c);

        if(c=='C')
        {
            rabbit=rabbit+n;
        }
        else if(c=='R')
        {
            rat=rat+n;
        }
        else if(c=='S')
        {
            frog=frog+n;
        }
        sum=sum+n;
    }

    printf("Total: %d cobaias\n",sum);
    printf("Total de coelhos: %d\n",rabbit);
    printf("Total de ratos: %d\n",rat);
    printf("Total de sapos: %d\n",frog);

    x=((float)rabbit*100)/sum;
    y=((float)rat*100)/sum;
    z=((float)frog*100)/sum;

    printf("Percentual de coelhos: %.2f %%\n",x);
    printf("Percentual de ratos: %.2f %%\n",y);
    printf("Percentual de sapos: %.2f %%\n",z);
return 0;
}
