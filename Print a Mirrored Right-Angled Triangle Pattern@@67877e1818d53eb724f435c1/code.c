#include <stdio.h>

int main() {
    int N, i, j;
    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        for (j = 0; j < N - i - 1; j++) {
            printf("  "); // Print spaces
        }
        for (j = 0; j <= i; j++) {
            printf("* "); // Print stars
        }
        printf("\n");
    }

    return 0;
}
