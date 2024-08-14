#include<stdio.h>
int main ()
{

    int N,a=1,b=2,c=3,i;

    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {

        printf("%d %d %d PUM\n",a,b,c);
        a+=4;
        b+=4;
        c+=4;
    }
return 0;
}
