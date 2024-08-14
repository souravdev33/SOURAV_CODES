#include<stdio.h>
int main ()
{
    int n,i,array1[10],array2[10];
    printf("Enter the numbers you want to take in array1 : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }

    printf("array1 : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",array1[i]);
    }

    for(i=0;i<n;i++)
    {
        array2[i]=array1[i];
    }

    printf("\narray2 : ");

    for(i=0;i<n;i++)
    {
        printf("%d ",array2[i]);
    }
    return 0;
}