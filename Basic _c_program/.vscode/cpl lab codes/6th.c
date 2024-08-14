#include <stdio.h>

int main() {
    int set = 1;
    int num,targetHeight,moves,stacks[num],totalBricks;

    while (1) {

        scanf("%d", &num);

        if (num == 0) {
            break;
        }

         totalBricks = 0;

        for (int i = 0; i < num; i++) {
            scanf("%d", &stacks[i]);
            totalBricks += stacks[i];
        }


        targetHeight = totalBricks / num;

        moves = 0;


        for (int i = 0; i < num; i++)
            {
            if (stacks[i] > targetHeight)
            {
                moves += stacks[i] - targetHeight;
            }
        }


        printf("Set #%d\n", set);
        printf("The minimum number of moves is %d.\n\n", moves);

        set++;
    }

    return 0;
}
