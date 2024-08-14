#include<stdio.h>
int main ()
{

    int a[5]={10,20,30,40,50},LB=0,UB=4,mid,item,f=0;

    printf("Enter the item : ");
    scanf("%d",&item);


    while(LB<=UB)
    {

        mid=(LB+UB)/2;

        if(a[mid]==item)
        {
            f++;
            break;
        }

        if(a[mid]<item)
        {
            LB=mid+1;
        }
        else
        {
            UB=mid-1;
        }
    }

    if(f==0)
    {

        printf("Item not found");
    }
    else
    {
        printf("Item found at Location %d",mid);

    }
return 0;
}
