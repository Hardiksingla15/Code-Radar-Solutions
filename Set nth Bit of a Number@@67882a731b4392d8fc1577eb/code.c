#include <stdio.h>

int setNthBit(int num, int n) {
    return num | (1 << n);
}

int main() {
    int num, n;
    scanf("%d %d", &num, &n);
    printf("%d\n", setNthBit(num, n));
    return 0;
}

