#include<stdio.h>
void main()
{
    int i,j,n=5;
    for ( i=0; i<n;i++) {
        for (j=1;j<=n;j++){
            printf(""); }
        for (j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");

        
    }
}