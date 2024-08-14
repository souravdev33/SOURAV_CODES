#include<stdio.h>
int main ()
{
    int n,sum=0,temp,rem;

    printf("Enter any number :");
    scanf("%d",&n);

    temp=n;

    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
    }
    if(sum==n)
        printf("Armstrong number");
    else
        printf("Not an armstrong number");
    return 0;
}