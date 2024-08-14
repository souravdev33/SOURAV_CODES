
#include<stdio.h>
int main ()
{
    int n,count=0,first=0,second=1,fibo;

    printf("Enter the range : ");
    scanf("%d",&n);

    while(count<n)
    {
        if(count<=1)
        {
            fibo=count;
        }
        else
        {
            fibo=first+second;
            first=second;
            second=fibo;
        }

    }
    printf("%d",fibo);
    count++;

return 0;
}
