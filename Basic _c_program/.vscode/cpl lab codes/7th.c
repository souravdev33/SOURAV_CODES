#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    while (N--) {
        int n;
        scanf("%d", &n);

        int m[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &m[i]);
        }

        int swaps = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (m[i] > m[j]) {
                    swaps++;
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n", swaps);
    }

    return 0;
}
