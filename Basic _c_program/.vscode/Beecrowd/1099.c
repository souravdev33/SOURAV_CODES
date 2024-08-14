#include<stdio.h>

int main() {
    int N, X, Y, i, j, sum, temp;
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d %d", &X, &Y);

        if (X > Y) {
            temp = X;
            X = Y;
            Y = temp;
        }

        sum = 0;

        for (j = X + 1; j < Y; j++) {
            if (j % 2 != 0) {
                sum = sum + j;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}
