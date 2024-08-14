#include<stdio.h>
int main ()
{
    int a,b,c,t,i;

    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);

        if(a>b && b>c)printf("%d",b);
        else if(b>c && c>a)printf("%d",b);
        else if(c>a && b>c)printf("%d",a);
    }
}

