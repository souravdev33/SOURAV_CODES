//1 x 2 x 3 x .......x n =?

#include<stdio.h>
int main ()
{
    int n,i,result=1;

    printf("Enter the last number : ");
    scanf("%d",&n);

    printf("1^2  x  2^2  x  3^2  x .....x %d^2\n",n);

    for(i=1;i<=n;i++)
    {
        result=result * i*i;

    }
    printf("The result is : %d",result);

    getch();
    return 0;
}