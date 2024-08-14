#include<stdio.h>
int main ()
{
    int i,j,b;
    char a[20];
    printf("Enter a string : ");
    scanf("%s",a);
    for (i=0;a[i]!='\0';i++){
        if(a[i]<97){
            a[i]=a[i];
        }
        else{
            a[i]=a[i]-32;
        }
    }
    printf("%s\n",a);
    return 0;
}