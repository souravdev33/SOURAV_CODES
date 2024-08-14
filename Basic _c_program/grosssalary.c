#include<stdio.h>
int main()
{
    float Basic,HRA,DA,Gross_Salary;
    printf("enter the basic salary of an employee: ");
    scanf("%f",&Basic);
    if (Basic<=10000)
    {
        HRA=(Basic * 20)/100;
        DA=(Basic * 80)/100;
    }
    else if(Basic<=20000)
    {
        HRA=(Basic * 25)/100;
        DA=(Basic * 90)/100;
    }
    else if(Basic>20000)
    {
        HRA=(Basic * 30)/100;
        DA=(Basic * 95)/100;
    }
    Gross_Salary= Basic + HRA + DA;
    printf("Gross salary of an employee=%.2f",Gross_Salary);

    return 0;

}