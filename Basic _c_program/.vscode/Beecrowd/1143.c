#include<stdio.h>
int main ()
{

    int N,i,a=1,b,c;

    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {
        printf("%d %d %d\n",a,a*a,a*a*a);
        a+=1;
    }
return 0;
}
