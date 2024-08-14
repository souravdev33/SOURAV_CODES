#include <stdio.h>

int main() {
    int num,temp,sum,rem;
    while (1)
        {
        scanf("%d", &num);
        if (num == 0)break;

        temp = num;
        sum=0;
        while (temp > 0)
        {
            rem=temp % 10;
            sum = sum + rem;
            temp = temp / 10;
        }


        while (sum >= 10) {
            temp = sum;
            sum = 0;
            while (temp > 0)
            {
                rem=temp % 10;
                sum = sum + rem;
                temp = temp / 10;
            }
        }

        printf("%d\n", sum);
    }
    return 0;
}

