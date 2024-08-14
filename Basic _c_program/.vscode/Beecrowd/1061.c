#include<stdio.h>
int main ()
{
    int x,y,a,b,c,d,e,f,M,N,T,p,o,r,s;
    scanf("%*s %d\n",&x);
    scanf("%d %*s",&a);
    scanf("%d %*s",&b);
    scanf("%d",&c);
    scanf("%*s %d\n",&y);
    scanf("%d %*s",&d);
    scanf("%d %*s",&e);
    scanf("%d",&f);

    M=((x*24*3600)+(a*3600)+(b*60)+c);
    N=((y*24*3600)+(d*3600)+(e*60)+f);

    T=N-M;
    p=T/86400;
    printf("%d dia(s)\n",p);

    T=T%86400;

    o=T/3600;
    printf("%d hora(s)\n",o);

    T=T%3600;
    r=T/60;
    printf("%d minuto(s)\n",r);

    T=T%60;
    s=T;
    printf("%d segundo(s)\n",s);
    
return 0;

}