#include<stdio.h>
int main ()
{
    int num,temp,rem,sum=0;

    printf("enter a number : ");
    scanf("%d",&num);

    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }
    printf("the reverse number is %d",sum);
}