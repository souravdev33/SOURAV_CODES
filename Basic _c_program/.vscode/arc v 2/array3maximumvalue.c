
#include<stdio.h>
int main ()
{

    int n,i,max,num[10];

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
    printf("The maximum is : %d",max);
    return 0;
}
