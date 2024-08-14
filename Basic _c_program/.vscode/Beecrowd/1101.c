#include<stdio.h>
int main ()
{
    int M,N,i,a,sum=0,temp;


    while(1)
    {
        scanf("%d %d",&M,&N);
        if(M>N)
        {
            temp=M;
            M=N;
            N=temp;
        }
        if(M<=0 || N<=0)
        {
            return 0;
        }
        sum=0;
        for(i=M; i<=N; i++)
        {
                printf("%d ",i);
                sum=sum+i;
        }

        printf("Sum=%d\n",sum);
    }
    return 0;

}
