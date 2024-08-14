#include<stdio.h>
int main ()
{
    int i,j,a[10][10],transpose[10][10],row,col;

    printf("Enter the row and col numbers for a matrix: ");
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

    //transposing a matrix

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            transpose[i][j]=a[i][j];
        }
        printf("\n");
    }

    //printing transpose matrix

    printf("Transpose = \n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",transpose[j][i]);
        }
        printf("\n");

    }
return 0;
}
