#include<stdio.h>
int main ()
{
    int N,i;
    float x,n1,n2,n3;
    scanf("%d",&N);

    for(i=0;i<N;i++)
    {
        scanf("%f %f %f",&n1,&n2,&n3);
        x=((n1*2)+(n2*3)+(n3*5))/10;
        printf("%.1f\n",x);

    }
return 0;
    
}