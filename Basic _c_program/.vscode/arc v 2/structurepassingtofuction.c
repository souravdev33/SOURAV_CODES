#include<stdio.h>
#include<string.h>

struct person
{
    char name[20];
    int age,salary;

};

int display(struct person person1)
{
    printf("Name : %s\n",person1.name);
    printf("Age : %d\n",person1.age);
    printf("Salary : %d\n",person1.salary);
}
int main ()
{
    struct person person1;

    strcpy(person1.name,"Sourav dev");
    person1.age=22;
    person1.salary=38274;

    display(person1);
}