#include<stdio.h>

int display(int num[])
{
    int i,nS;
    for(i=0;i<n;i++)
    {
        printf("%d ",num[i]);
    }    
}

int main()
{
    int n,i,num[20];

    printf("Enter how many numbers in array : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
 
    display(num);

}