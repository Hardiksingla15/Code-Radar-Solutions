#include <stdio.h>

void checkLSB(int num) {
    int mask = 0x00000001; // Mask with only the LSB set
    if (num & mask) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }
}

int main() {
    int num;
    scanf("%d", &num);
    checkLSB(num);
    return 0;
}
