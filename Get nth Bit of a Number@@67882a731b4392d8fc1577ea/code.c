#include <stdio.h>

void getNthBit(int num, int n) {
    int mask = 1 << n; // Shift 1 to the left by n positions to create the mask
    int bit = (num & mask) >> n; // AND operation followed by right shift to get the nth bit
    printf("%d\n", bit);
}

int main() {
    int num, n;
    scanf("%d %d", &num, &n);
    getNthBit(num, n);
    return 0;
}

