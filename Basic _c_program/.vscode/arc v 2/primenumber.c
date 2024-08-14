#include<stdio.h>
int main ()
{

    int num,i,count=0;

    printf("enter a number : ");
    scanf("%d",&num);

    for(i=2; i<num; i++)
    {

        if(num%i==0)
        {
            count++;
            break;
        }

    }

    if(count==0)
        printf("Prime number");
    else
        printf("Not a prime number");

    getch();

    return 0;
}
