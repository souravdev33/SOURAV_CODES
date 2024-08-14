#include<stdio.h>

struct person
{
    int age;
    float salary;
};
int main()
{
    struct person person[2];

    int i;

    for(i=0;i<2;i++)
    {
        printf("Enter the information for person %d\n",i+1);
        printf("Enter the age : ");
        scanf("%d",&person[i].age);
        printf("Enter thr salary : ");
        scanf("%f",&person[i].salary);

    }

    for(i=0;i<=2;i++)
    {
        printf("\n\nThe information for the person %d\n",i+1);
        printf("Age :%d\n",person[i].age);
        printf("Salary :%.2f\n",person[i].salary);
    }
    return 0;
}
