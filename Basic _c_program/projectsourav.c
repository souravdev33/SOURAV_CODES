#include<stdio.h>
#include<ctype.h>
int main ()
{
    char a='S',b='O',c='U',d='R',e='A',f='V';
    char A,B,C,D,E,F;
    A=tolower(a);
    B=tolower(b);
    C=tolower(c);
    D=tolower(d);
    E=tolower(e);
    F=tolower(f);
    printf("%c=%c=%d=%d\n%c=%c=%d=%d\n%c=%c=%d=%d\n%c=%c=%d=%d\n%c=%c=%d=%d\n%c=%c=%d=%d\n",a,A,a,A,b,B,b,B,c,C,c,C,d,D,d,D,e,E,e,E,f,F,f,F);
    return 0;
}