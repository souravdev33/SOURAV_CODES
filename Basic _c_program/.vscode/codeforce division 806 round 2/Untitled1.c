
#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n], b[n];


        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }


        for (int i = 0; i < n; i++) {
            b[i] = i + 1;
        }


        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (a[j] > a[j + 1]) {

                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;


                    temp = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = temp;
                }
            }
        }


        for (int i = 0; i < n; i++) {
            printf("%d ", b[i]);
        }
        printf("\n");
    }

    return 0;
}
