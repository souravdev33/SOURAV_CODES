#include<stdio.h>
int main ()
{

    int i,t,n,j,sum=0;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%d",&n);

        sum=0;

        for(j=1;j<n;j++)
        {
            if(n%j==0)
            {
                sum=sum+j;
            }

        }
        if(sum==n)printf("%d eh perfeito\n",n);
        else printf("%d nao eh perfeito\n",n);

    }
return 0;
}
