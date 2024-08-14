#include<stdio.h>
int main()
{

    int  N[10],i,n;

    scanf("%d",&n);



    for(i=0;i<10;i++)
    {

        printf("N[%d] = %d\n",i,n);
        n=n+n;

    }
return 0;

}
