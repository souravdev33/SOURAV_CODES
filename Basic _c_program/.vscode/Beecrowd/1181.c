#include<stdio.h>
int main()
{
    double a[12][12],sum=0.0;
    int i,j,n;
    char choice;

    scanf("%d %c",&n,&choice);

    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&a[i][j]);
        }
    }
    i=n;

    for(j=0;j<12;j++)
    {
        sum=sum+a[i][j];
    }

    if(choice=='S')printf("%.1lf\n",sum);

    else
        printf("%.1lf\n",sum/12.0);

return 0;
}
