#include<stdio.h>
int main ()

{

    int i,t,n,even=0,odd=0,positive=0,negative=0;

    scanf("%d",&t);

    for(i=0; i<t; i++)
    {

        scanf("%d",&n);

        if(n%2==0)even++;
        if(n%2!=0)odd++;
        if(n>0)positive++;
        if(n<0)negative++;
    }
    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);
    printf("Positive: %d\n",positive);
    printf("Negative: %d\n",negative);
return 0;
}
