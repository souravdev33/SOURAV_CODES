#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the value for n: ");
    scanf("%d",&n);

    for ( i=1; i<=10; i++)
    {
        printf("multiplication table for %d\n", i);
        for(j=1;j<=10;j++)
        {
            printf("%d*%d=%d\n",i,j,i*j);
        }
        printf("\n");

    }
