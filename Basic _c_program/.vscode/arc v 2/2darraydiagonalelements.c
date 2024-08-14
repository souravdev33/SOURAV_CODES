//c program to find out the sum of the diagonal elements for a given matrix


#include<stdio.h>
int main ()
{
    int i,j,a[3][3],sum=0;
    printf("Enter the elements for the a matrix : \n");

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

    //diagonal elements 

    printf("Diagonal elements :  ");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                printf("%d ",a[i][j]);
                sum=sum+a[i][j];
            }
        }
    }
    printf("\nThe sum is : %d",sum);

}