#include<stdio.h>
int main ()
{
    int n,row,col;
    printf("Enter the n  :");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1;col<=n;col++)
        {
            if(row==1 || row==n || col==1 || col==n)
                printf("0 ");
            else
                printf("1 ");
        }
    printf("\n");
}
return 0;
}
