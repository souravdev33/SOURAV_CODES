#include<stdio.h>
int main ()
{

    int n,i,j,count=0,t;

    scanf("%d",&t);

    for(i=0;i<t;i++)
    {

        scanf("%d",&n);

        count=0;

        for(j=2;j<n;j++)
        {

            if(n%j==0)count++;

        }
        if(count==0) printf("%d eh primo\n",n);
        else printf("%d nao eh primo\n",n);

    }
return 0;
}
