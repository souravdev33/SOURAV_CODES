#include <stdio.h>

int main() {
    int n, m = 0, digit, i;
    int count[10] = {0};

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
        m++;
    }

    printf("Total digits: %d\n", m);
    for (i = 0; i < 10; i++) {
        if (count[i] != 0) {
            printf("%d = %d\n", i, count[i]);
        }
    }

    return 0;
}
/*

#include <stdio.h>
int main() {
    int n,m=0,digit,i;
    int count[10]={0,0,0,0,0,0,0,0,0,0};  // Initialize count for all digits to zero
    scanf("%d",&n);

    while (n!=0) {
        digit=n % 10;
        count[digit]++;
        n=n/10;
        m++;
    }
    printf("Total digit = %d\n",m);
    for(i=0;i<10;i++){
        if(count[i]!=0){
            printf("%d = %d\n",i,count[i]);
        }
    }
    return 0;
}
*/
