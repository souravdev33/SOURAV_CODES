#include<stdio.h>
int main ()
{
    FILE *file;
    char name[40];
    int age,phonenumber,num,i;

    file= fopen("studentdetails.txt","w");

    if(file==NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("File is opened\n");
        printf("How many students : ");
        scanf("%d",&num);

        for(i=0;i<num;i++)
        {
            printf("Enter the student name : ");
            scanf("%s",&name);
            printf("Enter the student age : ");
            scanf("%d",&age);
            printf("Enter the student phonenumber : ");
            scanf("%d",&phonenumber);

            fprintf(file,"\n%s\t\t%d\t%d",name,age,phonenumber);
        }
        

        fclose(file);
    }

}