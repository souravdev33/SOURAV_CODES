#include<stdio.h>
int main()
{

    double a[12][12],sum=0.0;
    int n,i,j;
    char choice;

    scanf("%d %c",&n,&choice);


    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&a[i][j]);
        }
    }

    j=n;

    for(i=0;i<12;i++)
    {
        sum=sum+a[i][j];
    }

    if(choice=='S')printf("%.1lf\n",sum);
    else printf("%.1lf\n",sum/12.0);

return 0;
}
