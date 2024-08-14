#include<stdio.h>
int main ()
{
    int num1,num2;

    printf("enter two mumbers : ");
    scanf("%d %d",&num1,&num2);

    if(num1>num2){
        printf("%d num1 is larger",num1);
    }
    else if(num1<num2){
        printf("%d num2 is larger",num2);
    }
    else
    printf("thats not a valid number");

return 0;

}