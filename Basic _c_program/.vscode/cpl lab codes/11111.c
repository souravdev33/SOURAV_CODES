
#include<stdio.h>
int main()
{

    int t;
    long x,y;

    scanf("%d",&t);

    for(int i=0;i<t;i++)
    {

        scanf("%d %d",&x,&y);

        if (x<y) printf("<\n");
        else if (x>y) printf(">\n");
        else printf("=\n");

    }
    return 0;

}

