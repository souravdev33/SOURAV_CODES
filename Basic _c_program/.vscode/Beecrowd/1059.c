#include<stdio.h>
int main ()
{
    int i;

    for(i=2;i<=100;i=i+2)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
return 0;
}