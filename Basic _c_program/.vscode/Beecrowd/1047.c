#include<stdio.h>
int main ()
{

    int starthour,endhour,startmin,endmin,a,b,e,f;

    scanf("%d %d %d %d",&starthour,&startmin,&endhour,&endmin);
    f=endmin+60-startmin;

    if(endhour>starthour && endmin>startmin)
    {
        a=endhour-starthour;
        b=endmin-startmin;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",a,b);
    }


    else if(f<60)
    {
        e=0;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",e,f);
    }

    else if(starthour==endhour && startmin==endmin)
    {
        a=24;
        b=0;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",a,b);
    }
    else if(starthour>endhour && startmin>endmin)
    {
        a=endhour+24-starthour;
        b=endmin+60-startmin;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",a,b);
    }
    else if(starthour>endhour && startmin<endmin)
    {
        a=endhour+24-starthour;
        b=endmin-startmin;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",a,b);
    }

    else if(starthour>endhour && startmin<endmin)
    {
        a=endhour+24-starthour;
        b=endmin-startmin;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",a,b);
    }
    else
    {
        if(starthour<endhour && startmin>endmin)

            f=endmin+60-startmin;
        else if(f>=60)
        {
            e=endhour-starthour+1;
            f=f%60;

            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",e,f);
        }
        else
        {
            e=endhour-starthour;
            f=endmin-startmin;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",e,f);
        }
    }




    return 0;

}
