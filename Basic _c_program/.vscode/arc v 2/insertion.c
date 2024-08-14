#include<stdio.h>
int main ()
{
    int a[100],i,pos,size,item;

    printf("Enter the size of an array : ");
    scanf("%d",&size);

    printf("ENter the array element : ");
    
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position : ");
    scanf("%d",&pos);
    printf("Enter the item you want to insert :");
    scanf("%d",&item);

    for(i=size;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=item;
    size++;

    printf("The resultant array : \n");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
  
} 
    