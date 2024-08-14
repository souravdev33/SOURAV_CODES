#include <stdio.h>
int main() {
    long long int n,m=0,digit,i;
    int count[10]={0,0,0,0,0,0,0,0,0,0}; 
    printf("Enter your ID: ");
    scanf("%lld",&n);

    while (n!=0) {
        digit=n % 10;
        count[digit]++;
        n=n/10;
        m++;
    }
    printf("Total digit = %lld\n",m);
    for (i=0;i<10;i++) {
        printf("%d = %d\n", i, count[i]);
    }
    return 0;
}
