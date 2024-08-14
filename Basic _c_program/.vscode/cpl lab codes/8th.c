
#include <stdio.h>

int main() {
    int i, j;

    while (scanf("%d %d", &i, &j)>0) {
        int max = 0;
        int start = i, end = j;

        if (i > j) {
            start = j;
            end = i;
        }

        for (int num = start; num <= end; num++) {
            int n = num;
            int cycleLength = 1;

            while (n != 1) {
                if (n % 2 == 0)
                    n /= 2;
                else
                    n = 3 * n + 1;
                cycleLength++;
            }

            if (cycleLength > max) {
                max = cycleLength;
            }
        }

        printf("%d %d %d\n", i, j, max);
    }

    return 0;
}
