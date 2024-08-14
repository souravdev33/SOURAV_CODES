#include<stdio.h>
int main ()
{
    int a[1000],n,i,min,pos=-1;

    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    min=a[0];

    for(i=0; i<n; i++)
    {
        if(min>a[i])
            min=a[i];
    }
    printf("Menor valor: %d\n",min);

    for(i=0; i<n; i++)
    {
        if(min==a[i]){
            pos=i;
             break;
    }
    }
    printf("Posicao: %d\n",pos);
return 0;

}
