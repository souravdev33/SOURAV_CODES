#include<stdio.h>
int main ()
{

    int x,al=0,ga=0,di=0;

    while(1)
    {

        scanf("%d",&x);

        if(x==1)al++;
        if(x==2)ga++;
        if(x==3)di++;
        if(x==4)break;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",al);
    printf("Gasolina: %d\n",ga);
    printf("Diesel: %d\n",di);
return 0;

}
