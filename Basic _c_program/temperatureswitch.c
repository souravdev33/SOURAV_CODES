#include<stdio.h>
int main ()
{
    int choice;
    float temp,convertedtemp;

    printf("temperature conversion menu\n");
    printf("1. fahrenheit to celcius\n");
    printf("2. celcius to fahrenheit\n");
    printf("enter your choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: 
        {
            printf("enter the fahrenheit temperature : ");
            scanf("%f",&temp);

            convertedtemp=(5*temp - 160)/9;
            printf("the celcius temperature is %f",convertedtemp);
            break;
        }
        case 2:
        {
            printf("enter the celcius temperature : ");
            scanf("%f",&temp);

            convertedtemp=(9*temp + 160)/5;
            printf("the fahrenheit temperature is %f",convertedtemp);
            break;
        }
    }
    return 0;
}