//1^2 + 2^2 + 3^2 + ........+n

#include<Stdio.h>
int main ()
{
    int n,i,sum=0;

    printf("Enter the last number : ");
    scanf("%d",&n);
    printf("1^2 + 2^2 + 3^2 + ........+ %d^2\n ",n);

    for(i=1;i<=n;i++)
    {
        sum=sum+i*i;
    }
    printf("The sum is : %d",sum);

    return 0;

}