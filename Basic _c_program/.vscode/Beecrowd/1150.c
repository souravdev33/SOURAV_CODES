#include<stdio.h>
int main ()
{

    int x,z,i,sum=0,count=0;

    scanf("%d %d",&x,&z);

    while(z<=x)scanf("%d",&z);

    for(i=x;i<z;i++)
    {
        count++;

        sum=sum+i;

        if(sum>z) break;

    }
    printf("%d\n",count);
return 0;
}
