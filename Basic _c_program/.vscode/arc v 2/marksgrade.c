#include<stdio.h>
int main ()
{

    int marks;

    printf("enter the marks : ");
    scanf("%d",&marks);

    if(marks>=80)
        printf("you got A+");
    else if(marks>=70)
        printf("you have got A");
    else if(marks>=60)
        printf("you have got A-");
    else if(marks>=50)
        printf("you have got B");
    else if(marks>=40)
        printf("you have got B-");
    else if(marks>=33)
        printf("you have got D");
    else
        printf("you got fail");

    return 0;
}

