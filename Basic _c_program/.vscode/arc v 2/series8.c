//1^2 x 2^2 x 3^2 x 4^2 x .........xn^2

#include<stdio.h>
int main ()
{
    int n,i,result=1;
    printf("enter the last number : ");
    scanf("%d",&n);

    printf("1^2 x 2^2 x 3^2 x 4^2 x ........x %d^2\n",n);

    for(i=1;i<=n;i++)
    {
        result=result*i*i;

    }
    printf("The result is : %d",result);

    return 0;
}