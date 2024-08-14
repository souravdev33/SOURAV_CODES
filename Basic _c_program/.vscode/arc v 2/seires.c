#include<stdio.h>
int main ()
{

    int n,i,sum=0;

    printf("Enter the last number of the series :  ");
    scanf("%d",&n);

    printf("1+2+3+....+%d\n",n);

    for(i=1;i<=n;i++)
        sum=sum+i;

    printf("The sum of the series is : %d",sum);

    getch();
    return 0;
}
