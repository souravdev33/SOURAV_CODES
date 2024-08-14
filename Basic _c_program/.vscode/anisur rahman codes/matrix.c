#include<stdio.h>
int main ()
{
    int A[10][10],B[10][10],C[10][10],i,j,k,row,col,row1,col1,sum=0;
    printf("Enter row and col number of Matrix A: ");
    scanf("%d %d",&row,&col);
    //scaning A Matrix
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    //scaning B Matrix
    printf("Enter row and col number of Matrix B: ");
    scanf("%d %d",&row1,&col1);
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            printf("B[%d][%d]= ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    //print A matrix
    printf("A= ");
    for(i=0;i<row;i++)
    {
        printf("\t");
        for(j=0;j<col;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    //print B matrix
    printf("B= ");

    for(i=0;i<row1;i++)
    {
        printf("\t");
        for(j=0;j<col1;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    //Multiplication
    if(col!=row1)
    {
        printf("Multiplication is not possible between A and B matrix.\n");
    }
    else
    {
        for(i=0;i<row;i++)
        {
            for(j=0;j<col1;j++)
            {
                for(k=0;k<row;k++)
                {
                    sum=sum+A[i][k]*B[k][j];
                }
                C[i][j]=sum;
                sum=0;
            }
        }
        //printing A*B
        printf("A*B= ");
        {
            for(i=0;i<row;i++)
            {
                printf("\t");
                for(j=0;j<col1;j++)
                {
                    printf("%d ",C[i][j]);
                }
                printf("\n");
            }   
        }
    }
    return 0;
}