#include<stdio.h>
int main ()
{
    int t,i,n;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        int last=n%10;
        int first=n/10000;
        printf("Sum = %d\n",first+last);
    }
return 0;
}