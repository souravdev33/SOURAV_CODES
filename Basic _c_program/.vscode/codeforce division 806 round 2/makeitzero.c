#include <stdio.h>

int main() {
  int t, n;
  scanf("%d", &t);
  for (int i = 0; i < t; i++) {
    scanf("%d", &n);
    int a[n];
    for (int j = 0; j < n; j++) {
      scanf("%d", &a[j]);
    }

    // Check if there exists a way to make everyone receive candies from exactly one person.
    int seen[n];
    memset(seen, 0, sizeof(seen));
    for (int j = 0; j < n; j++) {
      int p, x;
      scanf("%d %d", &p, &x);
      if (seen[p]) {
        printf("No\n");
        goto next;
      }
      seen[p] = 1;
      a[p] -= 2 * x;
      a[j] += 2 * x;
    }

    // Check if all the people have the same number of candies after all swaps.
    int sum = 0;
    for (int j = 0; j < n; j++) {
      sum += a[j];
    }
    if (sum % n != 0) {
      printf("No\n");
      goto next;
    }

    printf("Yes\n");

    next:;
  }

  return 0;
}
