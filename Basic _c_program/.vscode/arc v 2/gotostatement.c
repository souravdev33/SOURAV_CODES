#include<stdio.h>
int main ()
{
    int i=1;

sourav:
    {
        printf("%d\n",i);
        i++;
    }

    if(i<=5)
        goto sourav;

    getch();

    return 0;

}
