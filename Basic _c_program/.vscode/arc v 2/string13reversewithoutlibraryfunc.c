#include<stdio.h>
#include<string.h>
int main ()
{
    char s1[20]="Sourav";
    char s2[20];

    int i=0,j=0,length=0;

    while(s1[i]!='\0')
    {
        length++;
        i++;
    }

    for (j=0,i=length-1;i>=0;i--,j++)
    {
        s2[j]=s1[i];
    }
    s2[j]='\0';

    printf("String 1 = %s\n",s1);
    printf("String 2 = %s",s2);

    return 0;
    

}