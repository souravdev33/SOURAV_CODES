#include<stdio.h>
int main ()
{
    int i,j,a[3][3],b[3][3];

    //scanning a mattrix
    printf("Enter the elemnets of a mattix :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("a[%d][%d] =",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    //printing a mattrix
    printf("a =  ");
    for(i=0;i<3;i++)
    {
        printf("\t");
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    //scanning b mattrix
    printf("\n\n");
    printf("Enter the elements of b mattrix : \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("b[%d][%d] =",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    //printing b mattrix
    printf("b = ");
    for(i=0;i<3;i++)
    {
        printf("\t");
        for(j=0;j<3;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
