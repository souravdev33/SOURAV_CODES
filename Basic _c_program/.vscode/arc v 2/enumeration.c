#include<stdio.h>

enum days_of_week
{
    sat,sun,mon,tue,wed,thu,fri
};

int main ()
{
    enum days_of_week day1,day2;

    day1=sun;
    day2=thu;

    printf("Day1 : %d\n",day1);
    printf("Day2 : %d\n",day2);
    
}