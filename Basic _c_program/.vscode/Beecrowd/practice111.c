#include<stdio.h>
int main ()
{
    int a[50],size,item,i,j,pos=-1;

    printf("Enter the size of the array : ");

    scanf("%d",&size);

    printf("Enter the array elements : ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the position: ");
    scanf("%d",&pos);

    for(i=0; i<size; i++)
    {
        if(a[i]==item)
        {
            count++;
            break;
        }

    }

    if(count==0)printf("Element not found");

    else{
        for(j=i;j<size;j++)
        {
            a[j]=a[j+1];
        }
        size--;
        printf("Updated array : \n");

        for(i=0;i<size;i++)
        {
            printf("%d ",a[i]);
        }
    }
}
