#include<stdio.h>
int main ()
{
    int i,j,a[3][3],uppersum=0,lowersum=0;

    printf("Enter the elements for a matrix : \n");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    //printing a matrix 
    printf("a = ");

    for(i=0;i<3;i++)
    {  
        printf("\t");
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    //uppersum and lowersum

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i<j)
            {
                uppersum=uppersum+a[i][j];
            }
            if(i>j)
            {
                lowersum=lowersum+a[i][j];
            }

        }
        
    }

    printf("\nThe uppersum is : %d\n",uppersum);
    printf("\nThe lowersum is : %d\n",lowersum);


    return 0;
}