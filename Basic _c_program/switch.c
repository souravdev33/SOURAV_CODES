#include<stdio.h>
int main ()
{
    int num;
    printf("Enter a num: ");
    scanf("%d",&num);
    num=num/10;
    switch(num)
    {
        case 10:
        case 9:
        case 8:
        {
            printf("A+");
            break;
        }

        case 7:
        case 6:
        {
            printf("A");
            break;
        }
        case 5: 
        {
            printf("B");
            break;
        }

        default:
        {
            printf("Fail");
            break;
        }
        
    }
    return 0;
}