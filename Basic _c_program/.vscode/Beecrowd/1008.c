#include<stdio.h>
int main ()
{
    int wh,NUMBER;
    float pht,SALARY;

    scanf("%d",&NUMBER);
    scanf("%d",&wh);
    scanf("%f",&pht);

    SALARY=(wh*pht);

    printf("NUMBER = %d\n",NUMBER);
    printf("SALARY = U$ %.2f\n",SALARY);

    return 0;
}

