#include<stdio.h>
#include<string.h>
int main ()
{
    char s1[20];
    char s2[20];
    char temp[20];

    printf("Enter a string for s1 : ");
    scanf("%s",&s1);

    printf("Enter a string for s2 : ");
    scanf("%s",&s2);

    printf("\n");

    printf("Before swapping : \n");
    
    printf("String 1 = %s\n",s1);
    printf("String 2 = %s\n",s2);


    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);

    printf("\n");
    printf("After swapping : \n");

    printf("String 1 = %s\n",s1);
    printf("String 2 = %s\n",s2);

    return 0;
    }