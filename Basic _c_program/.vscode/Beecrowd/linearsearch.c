#include<stdio.h>
int main ()
{

    int a[24]= {10,20,30,40,50},i,item;

    printf("Enter the item you are searching : ");
    scanf("%d",&item);
    while(i<5)
    {
        if(a[i]==item)
        {
            printf("Item found at %d",i);
            break;
        }

        i++;
    }

    if(i>=5)
    {
        printf("item not found");
    }

}

