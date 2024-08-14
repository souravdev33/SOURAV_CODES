#include<stdio.h>
int main ()
{

    int choice;
    float temp,convertedtemp;

    printf("1.Fahrenheit to celcius\n");
    printf("2.celcius to fahrenheit\n");
    printf("enter your choice : ");
    scanf("%d",&choice);

    switch(choice)
    {

    case 1:
    {
        printf("enter the fahrenheit temperature :");
        scanf("%f",&temp);
        convertedtemp=(5*temp -160)/9;
        printf("celcius temperature is : %f",convertedtemp);
        break;
    }

    case 2:
    {

        printf("enter the celcius temperature :");
        scanf("%f",&temp);
        convertedtemp=(9*temp+160)/5;
        printf("Fahrenheit temperature is : %f",convertedtemp);
        break;
    }
    default:
        printf("Not a valid temperature");

    }

    return 0;



}


