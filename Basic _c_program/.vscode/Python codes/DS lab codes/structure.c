
#include<stdio.h>
struct student{
    char name[50];
    int age;
    int roll;
    float marks;

};
void print(char name[],int age, int roll, float marks) {
    printf("%s\n%d\n%d\n%.2f\n",name,age,roll,marks);
   }

int main()
{ 
   
    struct student s1={"Sourav",22,33,93.88};
    print(s1.name,s1.age,s1.roll,s1.marks);
    
}