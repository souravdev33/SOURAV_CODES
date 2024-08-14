#include<stdio.h>
int main ()
{
    int N,i,n;
    scanf("%d",&N);

    for(i=0;i<N;i++)
    {
        scanf("%d",&n);

    if(n%2!=0 && n<0)
    {
        printf("ODD NEGATIVE\n");
    }
    if(n%2!=0 && n>0)
    {
        printf("ODD POSITIVE\n");
    }
    if(n==0)
    {
        printf("NULL\n");
    }
    if(n%2==0 && n>0)
    {
        printf("EVEN POSITIVE\n");
    }
    if(n%2==0 && n<0)
    {
        printf("EVEN NEGATIVE\n");
    }

    }
return 0;

}