
#include<stdio.h>
#include<string.h>


int main()
{
    int a[10], b[10], c[10], t, i;

    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        gets(a);
        gets(b);
        gets(c);

        if ((a > b && a < c) || (a < b && a > c))
            printf("Case %d: %d\n",i,a);
        else if ((b > a && b < c) || (b < a && b > c))
            printf("Case %d: %d\n",i,b);
        else
            printf("Case %d: %d\n",i,c);
    }

    return 0;
}

