#include<stdio.h>
int main ()
{
    int n,i,pos,max=0;


    for(i=1;i<=100;i++)
    {
        scanf("%d\n",&n);
        if(n>max)
        {
            max=n;
            pos=i;
        }
     
    }
    printf("%d\n%d\n",max,pos);
return 0;
    
}