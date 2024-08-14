#include<stdio.h>
int main ()
{
    int t,n,i,count=0;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%d ",&n);
        count++;
    }
    printf("%d",count);
}