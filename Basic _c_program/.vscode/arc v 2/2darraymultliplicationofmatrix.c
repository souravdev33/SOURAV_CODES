#include<stdio.h>
int main ()
{
    int i,j,k,a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,sum=0;

    printf("Enter the row and col number for a matrix : ");
    scanf("%d %d",&r1,&c1);

    printf("Enter the row and col number for b matrix : ");
    scanf("%d %d",&r2,&c2);


    while(c1!=r2)
    {
        printf("Error !!! pls enter the row and col number again : \n");

        
        printf("Enter the row and col number for a matrix : ");
        scanf("%d %d",&r1,&c1);

        printf("Enter the row and col number for b matrix : ");
        scanf("%d %d",&r2,&c2);

    }

    //scanning a matrix 

    printf("Enter the elements for the a matrix : \n\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    //scanning b matrix 

    printf("Enter the elements for the b matrix : \n\n"); 
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    //printing a matrix 

    printf("\n");

    printf("a = ");
    for(i=0;i<r1;i++)
    {
        printf("\t");
        for(j=0;j<c1;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    
    //printing b matrix 

    printf("\n");

    printf("b = ");
    for(i=0;i<r2;i++)
    {
        printf("\t");
        for(j=0;j<c2;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    //multiplying both mnatrix 

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            sum=0;
        }
        printf("\n");
    }

    //printing result matrix

    printf("\n");
    printf("a*b = ");

    for(i=0;i<r1;i++)
    {
        printf("\t");
        for(j=0;j<c2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
    
}