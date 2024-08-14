#include<stdio.h>
int main ()
{
    int marks[100],sum=0,i,n;
    printf("how many numbners : ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&marks[i]);
    }

    for(i=0; i<n; i++)
    {
        sum=sum+marks[i];
    }

    printf("the sum is = %d\n",sum);
    printf("the average is = %.2f",(float)sum/n);
    return 0;
}