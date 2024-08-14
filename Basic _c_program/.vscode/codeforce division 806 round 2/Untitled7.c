#include <stdio.h>

long long max(long long a, long long b) {
    return (a > b) ? a : b;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        long long x;
        scanf("%d %lld", &n, &x);

        long long a[n];
        long long max_height = 0;

        for (int i = 0; i < n; i++) {
            scanf("%lld", &a[i]);
            max_height = max(max_height, a[i]);
        }

        long long left = 1, right = max_height + x;
        long long tank_height = 0;

        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long water_used = 0;

            for (int i = 0; i < n; i++) {
                if (a[i] < mid) {
                    water_used += mid - a[i];
                }
            }

            if (water_used <= x) {
                tank_height = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        printf("%lld\n", tank_height);
    }

    return 0;
}
