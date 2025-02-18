#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int mask = 0x80000000; // Mask with only the MSB set
    if (num & mask) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }
    return 0;
}
