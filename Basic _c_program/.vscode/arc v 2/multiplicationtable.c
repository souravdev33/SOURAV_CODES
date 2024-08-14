#include<stdio.h>
int main ()
{
    while(1){ //here while(1) is used for getting multiple time output
    int num,i;
    printf("Enter any number : ");
    scanf("%d",&num);

    for(i=1;i<=10;i++)
    {

        printf("%d x %d = %d\n",num,i,num*i);

    }
    }
    getch();
    return 0;
}
