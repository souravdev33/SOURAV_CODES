#include<stdio.h>
int main()
{

    int t,x,y,i,j,sum=0;

    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {
        scanf("%d %d",&x,&y);

        if(x%2==0)x++;

        sum=0;

        for(j=1;j<=y;j++)
        {
            sum=sum+x;
            x=x+2;
        }
         printf("%d\n",sum);
    }

return 0;
}
