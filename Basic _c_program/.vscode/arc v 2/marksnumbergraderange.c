#include<stdio.h>
int main ()
{

    int marks;

    printf("enter the number : ");
    scanf("%d",&marks);

    if(marks>100 || marks<0)
        printf("invalid number");

    else if(marks>=80 && marks <=100)
        printf("A+");

    else if(marks>=70 && marks<=79)
        printf("A");

    else if(marks>=60 && marks<=69)
        printf("A-");

    else if(marks>=50 && marks<=59)
        printf("B");

    else if(marks>=40 && marks<=49)
        printf("D");

    else
        printf("fail");

    getch();

    return 0;
}
