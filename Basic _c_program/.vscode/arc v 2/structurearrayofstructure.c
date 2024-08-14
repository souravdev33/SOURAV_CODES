#include<stdio.h>

struct person
{
    char name[20];
    int age ;
    float salary;
};
int main ()
{
    struct person person[3];
    int i;

    for(i=0;i<3;i++)
    {
        printf("Enter the information of person %d\n",i+1);
        printf("Name : ");
        fflush(stdin);
        gets(person[i].name);
        printf("Age : ");
        scanf("%d",&person[i].age);
        printf("Salary : ");
        scanf("%f",&person[i].salary);
    }
     for(i=0;i<3;i++)
    {
        printf("\n\nInformation of person %d\n",i+1);
        printf("Name : %s\n",person[i].name);
        printf("Age : %d\n",&person[i].age);
        printf("Salary : %.2f\n",person[i].salary);
     
    }
    return 0;

}