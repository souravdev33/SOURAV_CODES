#include<stdio.h>
int main ()
{
    char a[10];
    gets(a);

    double salary,salarywithbonus,bonus,totalsalary;
    scanf("%lf",&salary);
    scanf("%lf",&salarywithbonus);

    bonus=(15*salarywithbonus)/100;

    totalsalary=salary+bonus;

    printf("TOTAL = R$ %.2f\n",totalsalary);

    return 0;

}
