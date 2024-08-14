#include<stdio.h>
#include<string.h>
int main ()
{
    char s1[50];
    char s2[50];
    int i=0,j=0,length=0;

    printf("Enter a string for s1 : ");
    scanf("%s",&s1);

    while(s1[i]!='\0')
    {
        length++;
        i++;
    }

    for(j=0,i=length-1;i>=0;i--,j++)
    {
        s2[j]=s1[i];
    }
    s2[j]='\0';

    printf("String 1 = %s\n",s1);
    printf("String 2 = %s\n",s2);

    int compare= strcmp(s1,s2);

    if(compare==0)
        printf("Strings are palindrome");
    else 
        printf("Strings are not palindrome");
    return 0;



}