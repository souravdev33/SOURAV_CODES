#include<stdio.h>
int main ()
{
    int num[10],n,max,i;
    printf("How many numbers : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    max=num[0];

    for(i=1;i<n;i++)
    {
        if(max<num[i])
            max=num[i];
    }
    printf("The maximum number is : %d",max);

    return 0;
}