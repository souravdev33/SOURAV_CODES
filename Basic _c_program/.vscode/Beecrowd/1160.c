#include <stdio.h>

int main()
{
    int PA, PB, year = 0, test, i;
    double G1, G2;

    scanf("%d", &test);

    for (i = 0; i < test; i++)
    {
        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);

        while (PA <= PB)
        {

            PA =PA + (int)(PA * G1 / 100);
            PB =PB + (int)(PB * G2 / 100);
            year++;

            if (year > 100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }

        if (year <= 100)
            printf("%d anos.\n", year);
        year = 0;
    }

    return 0;
}
