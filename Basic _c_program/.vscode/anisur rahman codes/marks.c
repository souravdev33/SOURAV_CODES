#include<stdio.h>
int main(void)
{
    int marks;
    printf("enter the marks : ");
    scanf("%d",&marks);

    if(marks>=80){
        printf("you have got A+");

    }
    else if(marks>=70){
        printf("you have got A");

    } 
    else if(marks>=60){
        printf("you have got A-");

    }
    else if(marks>=50){
        printf("you have got B");

    } 
    else if(marks>=33){
        printf("you have got C");

    }
    else
        printf("you have failed");


return 0;
    
}