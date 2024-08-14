#include<stdio.h>
int main ()
{
    int num,temp,rem,sum=0;

    printf("enter any numbers : ");
    scanf("%d",&num);

    temp=num;

    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem;
        temp=temp/10;
    }
    printf("Sum of the digit is :%d ",sum);
    return 0;
}