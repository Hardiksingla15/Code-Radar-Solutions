#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int num = i % 2; // Alternating start with 1 for odd rows and 0 for even rows
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num = 1 - num; // Toggle between 1 and 0
        }
        printf("\n");
    }

    return 0;
}
