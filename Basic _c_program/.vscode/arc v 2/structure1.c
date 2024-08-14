#include<stdio.h>

//global struture
struct person
{
    int age;
    float salary;

};
int main ()
{
    struct person person1,person2;

    printf("Enter the age of person 1 : \n");
    scanf("%d",&person1.age);
    printf("Enter the salary of person 1 : \n");
    scanf("%f",&person1.salary);

    printf("Enter the age of person 2 : \n");
    scanf("%d",&person2.age);
    printf("Enter the salary of person 2 : \n");
    scanf("%f",&person2.salary);


    printf("person1 : \n");
    printf("Age : %d\n",person1.age);
    printf("Salary : %.2f\n",person1.salary);

    printf("person2 : \n");
    printf("Age : %d\n",person2.age);
    printf("Salary : %.2f\n",person2.salary);
    
    return 0;
    
}
