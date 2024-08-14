#include<stdio.h>
int main ()
{
    int n,row,col;
    printf("Enter the n : ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c ",row+96);

        }
        printf("\n");
    }
return 0;
}