#include<stdio.h>
int main()
{

    int i,j=1;
    float s=0;

    for(i=1;i<=39;i=i+2)
    {
        s=s+i/(float)j;
        j=j+j;
    }
    printf("%.2f\n",s);
return 0;
}
