#include <stdio.h>

void printPyramid(int n) {
    int i, j, num;
    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (j = i; j < n; j++) {
            printf(" ");
        }
        // Print numbers
        num = 1;
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("%d", num);
            if (j < i) {
                num++;
            } else {
                num--;
            }
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

