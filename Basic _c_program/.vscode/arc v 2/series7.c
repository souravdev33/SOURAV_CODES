//1-2+3-4+5-6.......
//(1+3+5+6)-(2+4+6)

#include<stdio.h>
int main ()
{
    int n,i,sum=0,even=0,odd=0;
    printf("Enter the last numbers : ");
    scanf("%d",&n);
    printf("1-2+3-4+5-6.......+%d\n",n);

    for(i=1;i<=n;i++)
    {
    if(i%2==0)
        even=even+i;
    else
        odd=odd+i;
    }

    printf("The sum is : %d", odd-even);

    return 0;
}