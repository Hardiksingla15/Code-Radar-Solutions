#include <stdio.h>

void clearNthBit(int num, int n) {
    int mask = ~(1 << n); // Shift 1 to the left by n positions and then negate it to create the mask
    int result = num & mask; // AND operation to clear the nth bit
    printf("%d\n", result);
}

int main() {
    int num, n;
    scanf("%d %d", &num, &n);
    clearNthBit(num, n);
    return 0;
}
