#include<stdio.h>
int main ()
{
    int num[10],n,min,i;

    printf("How many numbers : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }

    min=num[0];

    for(i=1;i<n;i++)
    {
        if(min>num[i])
            min=num[i];

    }
    printf("The minimum is : %d",min);

    return 0;
}