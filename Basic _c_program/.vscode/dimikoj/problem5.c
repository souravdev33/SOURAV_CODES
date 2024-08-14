#include<stdio.h>
int main()

{

    int t,i,n,row,col;

    scanf("%d",&n);

    for(i=0;i<t;i++)
    {

        scanf("%d",&n);
        for(row=1;row<=n;row++)
        {
            for(col=1;col<=n;col++)
            {
                printf("*");
            }
            printf("\n");

        }
        if(i < t-1)
        {
            printf("\n");

        }


    }
return 0;

}
