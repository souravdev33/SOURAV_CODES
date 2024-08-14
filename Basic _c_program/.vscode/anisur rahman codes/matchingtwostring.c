//matching two string

#include<stdio.h>
#include<string.h>
void main()
{
    char a[10],b[10];
    int i,j=0;
    printf("Enter first string : ");
    gets(a);
    printf("Enter second string : ");
    gets(b);

    for(i=0; a[i]!=0; i++)
    {
        if(a[i]!=b[i])
        {
            j=1;
            break;
        }
    }
    if(j==1)
        printf("String doesnt match");
    else
        printf("String match");

}