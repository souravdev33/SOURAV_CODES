
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;

    while (1)
        {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0)
        {
            break;
        }

        int count = 0;
        for (int i = a; i <= b; i++) {
            int sqrtNum = sqrt(i);
            if (sqrtNum * sqrtNum == i) {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
