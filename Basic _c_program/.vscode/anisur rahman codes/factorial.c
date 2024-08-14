#include<stdio.h>
int factorial(int x)
{
    if(x==0 || x==1)
    {
        return 1;
    }
    else
    {
        int i;
        for(i=x-1;i>=2;i--)
        {
            x=x*i;
        }
        return x;
    }
}
int main ()
{
    int m,n;
    printf("Enter an inter: ");
    scanf("%d",&m);
    n=factorial(m);
    printf("The factorial value of %d is %d\n",m,n);
    return 0;
}