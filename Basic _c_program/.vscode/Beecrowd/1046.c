#include<stdio.h>
int main ()
{

    int starttime,endtime,a,b,c;

    scanf("%d %d",&starttime,&endtime);

    if(starttime==endtime)
    {
        c=24;
        printf("O JOGO DUROU %d HORA(S)\n",c);
    }

    else if(starttime<endtime)
    {
        a=endtime-starttime;
        printf("O JOGO DUROU %d HORA(S)\n",a);
    }
    else if(starttime>endtime)
    {
        b=endtime+24-starttime;
        printf("O JOGO DUROU %d HORA(S)\n",b);
    }
return 0;
}
