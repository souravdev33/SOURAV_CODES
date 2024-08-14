#include<stdio.h>
int main ()
{
    int i,j,a[10][10],b[10][10],c[10][10],row,col;

    printf("Enter the number of row and col : ");
    scanf("%d %d",&row,&col);

    //scanning a matrix
    printf("Enter the elements for a matrix : \n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }


    //scanning b matrix
    printf("Enter the elements for b matrix : \n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    //printing a matrix
    printf("\n");

    printf("a = ");
    for(i=0;i<row;i++)
    {
        printf("\t");
        for(j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    //printing b matrix
    printf("\n");

    printf("a = ");
    for(i=0;i<row;i++)
    {
        printf("\t");
        for(j=0;j<col;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    //adding two matrix
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
        printf("\n");
    }

    //printing result matrix
    printf("\n");

    printf("a+b = ");
    for(i=0;i<row;i++)
    {
        printf("\t");
        for(j=0;j<col;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return  0;


}
