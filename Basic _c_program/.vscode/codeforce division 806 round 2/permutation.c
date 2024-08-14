#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        int b[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
        }

        int possible = 1;
        int max_element = 0;

        for (int i = 0; i < n; i++) {
            if (b[i] > max_element) {
                max_element = b[i];
            }

            if (max_element - i > k) {
                possible = 0;
                break;
            }
        }

        if (possible) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
