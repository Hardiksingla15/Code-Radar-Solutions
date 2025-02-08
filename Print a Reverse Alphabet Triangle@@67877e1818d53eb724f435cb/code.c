#include <stdio.h>

void printPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        // Print numbers increasing
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printPyramid(n);
    return 0;
}
