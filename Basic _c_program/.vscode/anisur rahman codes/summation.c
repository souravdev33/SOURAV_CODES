#include<stdio.h>
#include<string.h>
int main ()
{
    int T;
    char n[101];
    scanf("%d",&T);

    for(int i=0;i<T;i++)
    {
        scanf("%s",&n);
        int length=strlen(n);
        int lastdigit= n[length-1]-48;
       
        if(lastdigit%2==0) printf("even\n");
        else
            printf("odd\n");
    }
return 0;
}