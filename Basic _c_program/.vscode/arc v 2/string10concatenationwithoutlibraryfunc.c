#include<stdio.h>
#include<string.h>
int main ()
{
    char s1[50]="Your only limit ";
    char s2[]="is you"; 
    int i=0,j=0,length=0;

    while(s1[i]!='\0')
    {
        length++;
        i++;
    }
    while(s2[j]!='\0')
    {
        s1[length+j]=s2[j];
        j++;
    }

    printf("Full string is : %s",s1);
    return 0;
}