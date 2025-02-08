#include <stdio.h>

void printAlphabetPyramid(int n) {
    char ch;
    for (int i = 1; i <= n; i++) {
        ch = 'A';
        for (int j = i; j < n; j++) {
            printf("");
        }
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printAlphabetPyramid(n);
    return 0;
}
