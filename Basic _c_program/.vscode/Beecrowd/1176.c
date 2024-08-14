#include<stdio.h>
int main ()
{

    int i,n,k;
    long long int a[60];

    a[0]=0;
    a[1]=1;

    for(i=2;i<61;i++)
    {

        a[i]=a[i-1]+a[i-2];
    }
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&k);
        printf("Fib(%d) = %lld\n",k,a[k]);

    }
return 0;
 }
