#include<stdio.h>
int main ()
{
    int i,j,A[3][4]={ {10,20,30,40},{50,60,70,80},{11,22,33,44} };

    for(i=0;i<3;i++) 
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    return 0;
}