
#include<stdio.h>
int main ()
{
    double A,B,C,MEDIA;
    scanf("%lf",&A);
    scanf("%lf",&B);
    scanf("%lf",&C);

    A=A*2;
    B=B*3;
    C=C*5;

    MEDIA=(A+B+C)/(2+3+5);

    printf("MEDIA = %.1lf\n",MEDIA);
    return 0;
}
