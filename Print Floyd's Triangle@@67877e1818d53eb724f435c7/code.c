#include <stdio.h>

void printPyramid(int n) {
    int num = 1; // Starting number
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        
        // Print numbers
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
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
