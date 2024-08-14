#include<stdio.h>
int main ()
{

    int n,sum=0,count=0;
    float avg;

    while(1)
    {

        scanf("%d",&n);

        if(n<0)break;

        sum=sum+n;
        count++;
    }
    avg=sum/(float)count;
    printf("%.2f\n",avg);
return 0;
}
