#include<stdio.h>
int main ()
{
    int T,n;
    scanf("%d",&T);

    for(int i=0;i<T;i++)
    {
        scanf("%d",&n);
        if(n%2==0)printf("even\n");
        else printf("odd\n");
    }
return 0;
}