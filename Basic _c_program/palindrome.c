#include<stdio.h.>
int main ()
{
    int num,temp,rem,sum=0;
    printf("enter a nmumber : ");
    scanf("%d",&num);

    temp=num;

    while(temp!=0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;     
    }
    if(sum==num)
        printf("the number is a palindrome");
    else
        printf("the number is not a palindrome");

    return 0;
         
}