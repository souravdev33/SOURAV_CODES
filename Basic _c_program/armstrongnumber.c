#include<stdio.h>
int main ()
{
    int num,temp,rem,sum=0;

    printf("enter any number : ");
    scanf("%d",&num);

    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
    }
    if(num==sum)
        printf("IT IS AN ARMSTRONG NUMBER");
    else
        printf("IT IS NOT AN ARMSTRONG NUMBER");
    
 return 0;
}