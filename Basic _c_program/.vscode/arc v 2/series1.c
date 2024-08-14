#include<stdio.h>
int main ()
{

    int n,sum=0,a=2;
    printf("Enter the last number of series : ");
    scanf("%d",&n);

    printf("2+4+6+.....+%d\n",n);

    while(a<=n)
    {

        sum=sum+a;
        a=a+2;
    }
    printf("The sum of the series is : %d",sum);
    return 0;
}
