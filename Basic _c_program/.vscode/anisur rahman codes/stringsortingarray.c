//String sorting Array

#include<stdio.h>
#include<string.h>
void main()
{
    char str[5][10],temp[10];
    int i,j;
    for (i=0;i<5;i++)
    {
        printf("Enter Word : ");
        gets(str[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(strcmpi(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    printf("After sorting\n");
    for(i=0;i<5;i++)
    {
        puts(str[i]);
    }

}