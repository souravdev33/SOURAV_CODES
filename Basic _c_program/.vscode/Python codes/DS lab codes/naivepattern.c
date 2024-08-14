#include <stdio.h>
#include <string.h>

void native_pattern(const char* txt, const char* pat) {
    int m = strlen(txt);
    int n = strlen(pat);
   
    for (int i = 0; i <= m - n; i++) {
        int j;
        for (j = 0; j < n; j++) {
            if (txt[i + j] != pat[j]) {
                break;
            }
        }
        if (j == n) {
            printf("Pattern found at index %d\n", i);
        }
    }
}

int main() {
    char txt[100];
    char pat[100];

    printf("Enter the text: ");
    scanf("%s", txt);

    printf("Enter the pattern: ");
    scanf("%s", pat);

    native_pattern(txt, pat);

    return 0;
}
