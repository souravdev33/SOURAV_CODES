//Searching in array

#include<stdio.h>
#include<string.h>
void main()
{
    char str[5][10],s[10];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter Words : ");
        gets(str[i]);
    }
    printf("Enter Word to search : ");
    gets (s);

    for(i=0;i<5;i++)
    {
        if(strcmpi(s,str[i])==0)
        {
            printf("Found");
            break;
        }
    }

    if(i==5)
    {
      printf("Not found");
    }
}