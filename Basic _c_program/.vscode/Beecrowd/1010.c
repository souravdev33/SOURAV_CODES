#include<stdio.h>
int main ()
{
    int cop1,uop1,cop2,uop2;
    float pop1,pop2,total;

    scanf("%d %d %f\n",&cop1,&uop1,&pop1);
    scanf("%d %d %f",&cop2,&uop2,&pop2);

    total=(uop1*pop1)+(uop2*pop2);

    printf("VALOR A PAGAR: %.2f\n",total);
    return 0;


}
