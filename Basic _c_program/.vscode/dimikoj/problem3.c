#include<stdio.h>
int main ()
{
    int i,j=0;
    for(i=1000;i>=1;i--)
    {
        printf("%d ",i);
        j++;
        if(j%5==0)printf("\n");
    }
return 0;
}