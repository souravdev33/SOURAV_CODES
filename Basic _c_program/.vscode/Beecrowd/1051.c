#include<stdio.h>
int main()
{

    float salary,tax;
    scanf("%f",&salary);

    if(salary>=0.00 && salary<=2000.00)
    {
        printf("Isento\n");

    }
    else if(salary>2000.00 && salary<=3000.00)
    {

        salary=salary-2000.00;
        tax=(salary*8)/100;
        printf("R$ %.2f\n",tax);


    }
    else if(salary>3000.00 && salary<=4500.00)
    {
        salary=salary-3000.00;
        tax=(salary*18)/100;
        printf("R$ %.2f\n",tax+80);

    }
    else
    {
        salary=salary-4500.00;
        tax=(salary*28)/100;
        printf("R$ %.2f\n",tax+80+270);
    }
}

