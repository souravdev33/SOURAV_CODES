#include<stdio.h>
int main ()
{
    int initial,final,temp,rem,i,sum=0;

    printf("Enter an initial value : ");
    scanf("%d",&initial);

    printf("Enter a final value : ");
    scanf("%d",&final);

    for(i=initial;i<=final;i++)
    {
        temp=i;
        while(temp!=0)
        {
            rem=temp%10;
            sum=sum+rem*rem*rem;
            temp=temp/10;
        }
        if(sum==i)
            printf("%d\n",i);
       sum=0;
    }
    return 0;
}