#include <stdio.h>

void printPyramid(int n) {
    int i, j, num;
    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (j = i; j < n; j++) {
            printf(" ");
        }
        // Print numbers increasing up to the middle
        num = 1;
        for (j = 1; j <= i; j++) {
            printf("%d", num);
            num++;
        }
        // Print numbers decreasing after the middle
        num -= 2;
        for (j = 1; j < i; j++) {
            printf("%d", num);
            num--;
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

