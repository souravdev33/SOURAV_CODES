#include<stdio.h>
int main ()
{
    int value,i,pos=-1,num[]={12,32,54,21,58,17};

    printf("Enter the number you want to search : ");
    scanf("%d",&value);

    for(i=0;i<6;i++)
    {   
        if(value==num[i])
        {
            pos=i+1;
            break;
        }
     
    }
    if(pos==-1)
        printf("The item is not found");
    else
        printf("the value is found at %d position",pos);


    return 0;           
}