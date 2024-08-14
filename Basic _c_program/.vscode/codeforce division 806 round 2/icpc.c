#include<stdio.h>
int main()
{

    int n,b=0,c=0,i,a[100];

    scanf("%d",&n);


        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);

        if(a[i]>=0)
        {
            b=b+a[i];
        }
        else
        {
            c=c+a[i];
        }
        }

    printf("%d\n",b-c);
    return 0;

}


