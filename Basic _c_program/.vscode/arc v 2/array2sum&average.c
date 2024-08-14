#include<stdio.h>
int main ()
{

    int i,a[10];
    float sum=0,average;

    printf("Enter five numbers : ");
    for(i=0;i<=4;i++)
    {

        scanf("%d",&a[i]);

    }

    for(i=0;i<=4;i++)
    {

        sum=sum+a[i];

    }
        printf("The sum is %.2f\n",sum);
        printf("The average is %.2f",average=sum/2);

        return 0;
}
