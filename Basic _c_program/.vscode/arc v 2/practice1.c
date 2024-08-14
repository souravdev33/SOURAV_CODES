#include <stdio.h>
#include <math.h>

int main()
{
    int a[6] = {100, 50, 20, 10, 5, 2};
    float c[6] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    int b[6], d[6];
    int i, j;
    float N;

    scanf("%f", &N);

    printf("NOTAS:\n");

    for (i = 0; i < 6; i++)
    {
        b[i] = N / a[i];
        N = fmod(N, a[i]);
    }

    for (j = 0; j < 6; j++)
    {
        printf("%d nota(s) de R$ %d.00\n", b[j], a[j]);
    }

    printf("MOEDAS:\n");

    for (i = 0; i < 6; i++)
    {
        d[i] = N / c[i];
        N = fmod(N, c[i]);
    }

    for (j = 0; j < 6; j++)
    {
        printf("%d moeda(s) de R$ %.2f\n", d[j], c[j]);
    }

    return 0;
}
