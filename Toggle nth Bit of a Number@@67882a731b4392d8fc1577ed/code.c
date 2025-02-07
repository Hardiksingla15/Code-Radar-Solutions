#include <stdio.h>

void toggleNthBit(int num, int n) {
    int mask = 1 << n; // Shift 1 to the left by n positions to create the mask
    int result = num ^ mask; // XOR operation to toggle the nth bit
    printf("%d\n", result);
}

int main() {
    int num, n;
    scanf("%d %d", &num, &n);
    toggleNthBit(num, n);
    return 0;
}
